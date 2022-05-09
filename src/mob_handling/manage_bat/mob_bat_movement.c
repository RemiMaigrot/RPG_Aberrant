/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** move_rect_bat
*/

#include "rpg.h"

int mob_bat_movement(rpg_t *game, int offset, int max_value, int pos_top)
{
    if (!game)
        return EPITECH_ERROR;
    game->mob->mob_bat->rect.top = pos_top;
    if (game->mob->mob_bat->rect.left > max_value - offset)
        game->mob->mob_bat->rect.left = 30;
    else
        game->mob->mob_bat->rect.left += offset;
    return EPITECH_SUCCESS;
}
