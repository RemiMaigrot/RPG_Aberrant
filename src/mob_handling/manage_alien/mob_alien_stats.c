/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** mob_alien_stats
*/

#include "rpg.h"

int mob_alien_life(sfRenderWindow *window, rpg_t *game)
{
    if (!game || !window)
        return EPITECH_ERROR;
    convert_int_to_str(game->mob->mob_alien->str_life,
    game->mob->mob_alien->life);
    sfText_setString(game->mob->mob_alien->text,
    game->mob->mob_alien->str_life);
    sfText_setPosition(game->mob->mob_alien->text,
    (sfVector2f){game->object[LINE_MOB_ALIEN]->position.x - 35,
    game->object[LINE_MOB_ALIEN]->position.y - 35});
    sfRenderWindow_drawText(window, game->mob->mob_alien->text, NULL);
    return (EPITECH_SUCCESS);
}

int mob_alien_attack(sfRenderWindow *window, rpg_t *game, mob_t *mob)
{
    if (!window || !game || !mob)
        return EPITECH_ERROR;
    if (radius_around_alien(game, game->mob->mob_alien->circle))
        track_alien(game, game->mob->mob_alien);
    return (EPITECH_SUCCESS);
}

int mob_alien_speed(sfRenderWindow *window, rpg_t *game)
{
    if (!window || !game)
        return EPITECH_ERROR;
    game->mob->mob_alien->time =
    sfClock_getElapsedTime(game->mob->mob_alien->clock);
    game->mob->mob_alien->seconds =
    game->mob->mob_alien->time.microseconds / 1000000.0;
    return (EPITECH_SUCCESS);
}
