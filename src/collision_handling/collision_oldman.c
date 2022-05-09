/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** manage_collision
*/

#include "rpg.h"

bool collision_dialogue(rpg_t *game, pnj_t *pnj)
{
    sfFloatRect rect1 = sfCircleShape_getGlobalBounds(pnj->circle);
    sfFloatRect rect2 =
    sfSprite_getGlobalBounds(game->object[LINE_PLAYER_RED]->sprite);

    if (!game || !pnj || !pnj->circle
    || !game->object[LINE_MOB_OLDMAN]->sprite)
        return EPITECH_ERROR;
    if (sfFloatRect_intersects(&rect1, &rect2, NULL))
        return (true);
    return (false);
}
