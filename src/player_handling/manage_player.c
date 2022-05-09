/*
** EPITECH PROJECT, 2022
** Visual Studio Live Share (Workspace)
** File description:
** manage_player
*/

#include "rpg.h"

int manage_player_life(rpg_t *game)
{
    if (!game)
        return (EPITECH_ERROR);
    sfRectangleShape_setFillColor(game->object[LINE_PLAYER_RED]->shape, sfRed);
    sfRectangleShape_setSize(game->object[LINE_PLAYER_RED]->shape,
    (sfVector2f){game->player->life * 4, 25});
    sfRectangleShape_setPosition(game->object[LINE_PLAYER_RED]->shape,
    (sfVector2f){712, 860});
    return (EPITECH_SUCCESS);
}
