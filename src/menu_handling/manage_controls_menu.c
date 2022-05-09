/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** manage_controls_menu
*/

#include "rpg.h"

int manage_controls_menu(rpg_t *game, sfVector2i mouse_pos)
{
    if (button_is_clicked(game->btn->back_b, mouse_pos)) {
        game->btn->wait = true;
        game->btn->button_clicked = "back";
    }
    return (EPITECH_SUCCESS);
}
