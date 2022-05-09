/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** mob_bat_stats
*/

#include "rpg.h"

int mob_bat_life(sfRenderWindow *window, rpg_t *game)
{
    if (!game || !window)
        return EPITECH_ERROR;
    convert_int_to_str(game->mob->mob_bat->str_life,
    game->mob->mob_bat->life);
    sfText_setString(game->mob->mob_bat->text,
    game->mob->mob_bat->str_life);
    sfText_setPosition(game->mob->mob_bat->text,
    (sfVector2f){game->object[LINE_MOB_BAT]->position.x - 35,
    game->object[LINE_MOB_BAT]->position.y - 35});
    sfRenderWindow_drawText(window, game->mob->mob_bat->text, NULL);
    return (EPITECH_SUCCESS);
}

int mob_bat_attack(rpg_t *game, mob_t *bat)
{
    if (!game || !bat)
        return EPITECH_ERROR;
    sfCircleShape_setPosition(bat->circle,
    (sfVector2f){game->object[LINE_MOB_BAT]->position.x - 80,
    game->object[LINE_MOB_BAT]->position.y - 80});
    if (detect_bat(game, bat, game->player)) {
        track_bat(game, game->mob->mob_bat);
    }
    return (EPITECH_SUCCESS);
}

int mob_bat_speed(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    game->mob->mob_bat->time =
    sfClock_getElapsedTime(game->mob->mob_bat->clock);
    game->mob->mob_bat->seconds =
    game->mob->mob_bat->time.microseconds / 1000000.0;
    return (EPITECH_SUCCESS);
}
