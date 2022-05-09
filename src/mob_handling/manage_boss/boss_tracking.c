/*
** EPITECH PROJECT, 2022
** Visual Studio Live Share (Workspace)
** File description:
** boss_fight
*/

#include "rpg.h"

int init_boss_tracking(rpg_t *game, boss_t *boss)
{
    if (!game)
        return EPITECH_ERROR;
    boss->circle_atk = sfCircleShape_create();
    sfCircleShape_setPosition(boss->circle_atk,
    (sfVector2f){game->object[LINE_PLAYER_RED]->position.x - 15,
    game->object[LINE_PLAYER_RED]->position.y - 15});
    sfCircleShape_setRadius(boss->circle_atk, 30);
    sfCircleShape_setFillColor(
    boss->circle_atk, sfColor_fromRGBA(0, 171, 217, 150));
    boss->circle_move = sfCircleShape_create();
    sfCircleShape_setPosition(
    boss->circle_move, game->object[LINE_MOB_BOSS]->position);
    sfCircleShape_setRadius(boss->circle_move, 150);
    sfCircleShape_setFillColor(
    boss->circle_move, sfColor_fromRGBA(0, 171, 217, 150));
    sfSprite_setOrigin(
    game->object[LINE_MOB_BOSS]->sprite, (sfVector2f){120, 114});
    return (EPITECH_SUCCESS);
}

int manage_boss_tracking(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    return EPITECH_SUCCESS;
}
