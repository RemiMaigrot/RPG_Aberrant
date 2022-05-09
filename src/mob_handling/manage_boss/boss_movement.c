/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** boss_movement
*/

#include "rpg.h"

static int boss_move_left(rpg_t *game)
{
    if (!game)
        return (EPITECH_ERROR);
    game->mob->boss->direction = 'l';
    game->object[LINE_MOB_BOSS]->position.x -= 2;
    return (EPITECH_SUCCESS);
}

static int boss_move_right(rpg_t *game)
{
    if (!game)
        return (EPITECH_ERROR);
    game->mob->boss->direction = 'r';
    game->object[LINE_MOB_BOSS]->position.x += 2;
    return (EPITECH_SUCCESS);
}

int boss_movement(sfRenderWindow *window, rpg_t* game)
{
    if (!window || !game)
        return EPITECH_ERROR;
    if (game->object[LINE_MOB_BOSS]->position.x >=
    game->object[LINE_PLAYER_RED]->position.x)
        boss_move_left(game);
    if (game->object[LINE_MOB_BOSS]->position.x <=
    game->object[LINE_PLAYER_RED]->position.x)
        boss_move_right(game);
    if (game->object[LINE_MOB_BOSS]->position.y >=
    game->object[LINE_PLAYER_RED]->position.y)
        game->object[LINE_MOB_BOSS]->position.y -= 2;
    if (game->object[LINE_MOB_BOSS]->position.y <=
    game->object[LINE_PLAYER_RED]->position.y)
        game->object[LINE_MOB_BOSS]->position.y += 2;
    return EPITECH_SUCCESS;
}
