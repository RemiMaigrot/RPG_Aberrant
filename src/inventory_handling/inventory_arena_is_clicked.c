/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** inventory_arena_is_clicked
*/

#include "rpg.h"

static int manage_click_potion_leftright_arena(rpg_t *game,
sfVector2i mouse_pos)
{
    if (!game)
        return EPITECH_ERROR;
    if (potion_left_inventory_is_clicked(game, mouse_pos)
        && game->potion->heal_left) {
        if (game->player->life <= 100) {
            game->player->life += 45;
            game->potion->heal_left = false;
        }
    }
    if (potion_right_inventory_is_clicked(game, mouse_pos)
        && game->potion->heal_right) {
        if (game->player->life <= 100) {
            game->player->life += 45;
            game->potion->heal_right = false;
        }
    }
    return EPITECH_SUCCESS;
}

int manage_click_all_potion_arena(rpg_t *game, sfVector2i mouse_pos)
{
    if (!game)
        return EPITECH_ERROR;
    if (potion_top_inventory_is_clicked(game, mouse_pos)
        && game->potion->heal_top) {
        if (game->player->life <= 100) {
            game->player->life += 45;
            game->potion->heal_top = false;
        }
    }
    if (potion_down_inventory_is_clicked(game, mouse_pos)
        && game->potion->heal_down) {
        if (game->player->life <= 100) {
            game->player->life += 45;
            game->potion->heal_down = false;
        }
        manage_click_potion_leftright_arena(game, mouse_pos);
    }
    return EPITECH_SUCCESS;
}
