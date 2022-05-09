/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** move_rect_attack
*/

#include "rpg.h"

int move_rect_attack(rpg_t *game, int offset, int max_value)
{
    if (!game)
        return EPITECH_ERROR;
    if (game->attack->sword->rect.top >= max_value - offset) {
        game->attack->sword->rect.top = 0;
        game->player->attack_right = false;
        game->player->attack_left = false;
        damages_of_sword(game);
    } else {
        game->attack->sword->rect.top += offset;
    }
    return EPITECH_SUCCESS;
}
