/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** track_ennemy
*/

#include "rpg.h"

static int track_mob_knight2(rpg_t *game, mob_t *mob)
{
    if (game->object[LINE_MOB_KNIGHT]->position.x
    >= game->object[LINE_PLAYER_RED]->position.x) {
        mob_movement(mob, 30, 94, 34);
        game->object[LINE_MOB_KNIGHT]->position.x -= 1;
    }
    if (game->object[LINE_MOB_KNIGHT]->position.x
    < game->object[LINE_PLAYER_RED]->position.x) {
        mob_movement(mob, 30, 94, 66);
        game->object[LINE_MOB_KNIGHT]->position.x += 1;
    }
    return (EPITECH_SUCCESS);
}

int track_mob_knight(rpg_t *game, mob_t *mob)
{
    if (player_in_mob_radius(game, mob->circle)) {
        if (game->object[LINE_MOB_KNIGHT]->position.y
        >= game->object[LINE_PLAYER_RED]->position.y) {
            mob_movement(mob, 30, 94, 98);
            game->object[LINE_MOB_KNIGHT]->position.y -= 1;
        }
        if (game->object[LINE_MOB_KNIGHT]->position.y
        <= game->object[LINE_PLAYER_RED]->position.y) {
            mob_movement(mob, 30, 94, 3);
            game->object[LINE_MOB_KNIGHT]->position.y += 1;
        }
        track_mob_knight2(game, mob);
    }
    return (EPITECH_SUCCESS);
}
