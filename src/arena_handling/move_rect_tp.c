/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** move_rect_tp
*/

#include "rpg.h"

int move_rect_tp(rpg_t *game, int offset, int max_value, int pos_top)
{
    if (!game)
        return EPITECH_ERROR;
    game->tp_boss->rect.top = pos_top;
    if (game->tp_boss->rect.left > max_value - offset)
        game->tp_boss->rect.left = 0;
    else
        game->tp_boss->rect.left += offset;
    return EPITECH_SUCCESS;
}
