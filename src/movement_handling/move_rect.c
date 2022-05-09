/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** move_rect
*/

#include "rpg.h"

int movement_rect_right(rpg_t *game, int offset, int max_value, int pos_top)
{
    if (!game)
        return EPITECH_ERROR;
    game->player->rect.top = pos_top;
    if (game->player->rect.left > max_value - offset)
        game->player->rect.left = 0;
    else
        game->player->rect.left += offset;
    return EPITECH_SUCCESS;
}

int movement_rect_left(rpg_t *game, int offset, int max_value, int pos_top)
{
    if (!game)
        return EPITECH_ERROR;
    game->player->rect.top = pos_top;
    if (game->player->rect.left > max_value - offset)
        game->player->rect.left = 0;
    else
        game->player->rect.left += offset;
    return EPITECH_SUCCESS;
}

int movement_rect_up(rpg_t *game, int offset, int max_value, int pos_top)
{
    if (!game)
        return EPITECH_ERROR;
    game->player->rect.top = pos_top;
    if (game->player->rect.left > max_value - offset)
        game->player->rect.left = 0;
    else
        game->player->rect.left += offset;
    return EPITECH_SUCCESS;
}

int movement_rect_down(rpg_t *game, int offset, int max_value, int pos_top)
{
    if (!game)
        return EPITECH_ERROR;
    game->player->rect.top = pos_top;
    if (game->player->rect.left > max_value - offset)
        game->player->rect.left = 0;
    else
        game->player->rect.left += offset;
    return EPITECH_SUCCESS;
}

int movement_rect_default(rpg_t *game, int offset, int max_value)
{
    if (!game)
        return EPITECH_ERROR;
    game->player->rect.top = 0;
    if (game->player->rect.left > max_value - offset)
        game->player->rect.left = 0;
    else
        game->player->rect.left += offset;
    return EPITECH_SUCCESS;
}
