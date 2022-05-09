/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** event_attack
*/

#include "rpg.h"

static int right_attack(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    game->player->attack_right = true;
    return (EPITECH_SUCCESS);
}

static int left_attack(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    game->player->attack_left = true;
    return (EPITECH_SUCCESS);
}

int player_attacking(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    if (my_strcmp(game->player->direction, "right") == 0) {
        right_attack(game);
    }
    if (my_strcmp(game->player->direction, "left") == 0) {
        left_attack(game);
    }
    return (EPITECH_SUCCESS);
}
