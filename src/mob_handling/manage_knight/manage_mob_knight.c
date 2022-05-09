/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** ennemy_spawn2
*/

#include "rpg.h"

static int mob_knight_life(sfRenderWindow *window, rpg_t *game)
{
    if (!game || !window)
        return EPITECH_ERROR;
    convert_int_to_str(game->mob->mob_knight->str_life,
    game->mob->mob_knight->life);
    sfText_setString(game->mob->mob_knight->text,
    game->mob->mob_knight->str_life);
    sfText_setPosition(game->mob->mob_knight->text,
    (sfVector2f){game->object[LINE_MOB_KNIGHT]->position.x - 35,
    game->object[LINE_MOB_KNIGHT]->position.y - 35});
    sfRenderWindow_drawText(window, game->mob->mob_knight->text, NULL);
    return (EPITECH_SUCCESS);
}

static int mob_knight_attack(rpg_t *game, mob_t *mob)
{
    if (!game || !mob)
        return EPITECH_ERROR;
    if (radius_around_knight(game, game->mob->mob_knight->circle))
        track_mob_knight(game, game->mob->mob_knight);
    return (EPITECH_SUCCESS);
}

static int mob_knight_speed(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    game->mob->mob_knight->time =
        sfClock_getElapsedTime(game->mob->mob_knight->clock);
    game->mob->mob_knight->seconds =
    game->mob->mob_knight->time.microseconds / 1000000.0;
    return (EPITECH_SUCCESS);
}

int manage_mob_knight(sfRenderWindow *window, rpg_t *game)
{
    if (!game || !window)
        return EPITECH_ERROR;
    mob_knight_speed(game);
    mob_knight_attack(game, game->mob->mob_knight);
    if (game->mob->mob_knight->seconds > 0.15) {
        sfSprite_setTextureRect(game->object[LINE_MOB_KNIGHT]->sprite,
        game->mob->mob_knight->rect);
        sfClock_restart(game->mob->mob_knight->clock);
    }
    sfRenderWindow_drawSprite(window, game->object[LINE_MOB_KNIGHT]->sprite,
    NULL);
    sfSprite_setPosition(game->object[LINE_MOB_KNIGHT]->sprite,
    game->object[LINE_MOB_KNIGHT]->position);
    mob_knight_life(window, game);
    return (EPITECH_SUCCESS);
}
