/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** mob_alien_tracking
*/

#include "rpg.h"

static int track_alien_2(rpg_t *game, mob_t *mob)
{
    if (game->object[LINE_MOB_ALIEN]->position.x >=
    game->object[LINE_PLAYER_RED]->position.x) {
        mob_movement(mob, 30, 94, 34);
        game->object[LINE_MOB_ALIEN]->position.x -= 1;
    }
    if (game->object[LINE_MOB_ALIEN]->position.x <=
    game->object[LINE_PLAYER_RED]->position.x) {
        mob_movement(mob, 30, 94, 66);
        game->object[LINE_MOB_ALIEN]->position.x += 1;
    }
    return (EPITECH_SUCCESS);
}

int track_alien(rpg_t *game, mob_t *mob)
{
    if (player_in_mob_radius(game, mob->circle)) {
        if (game->object[LINE_MOB_ALIEN]->position.y
        >= game->object[LINE_PLAYER_RED]->position.y) {
            mob_movement(mob, 30, 94, 98);
            game->object[LINE_MOB_ALIEN]->position.y -= 1; }
        if (game->object[LINE_MOB_ALIEN]->position.y
        <= game->object[LINE_PLAYER_RED]->position.y) {
            mob_movement(mob, 30, 94, 3);
            game->object[LINE_MOB_ALIEN]->position.y += 1;
        }
        track_alien_2(game, mob);
    }
    return (EPITECH_SUCCESS);
}
