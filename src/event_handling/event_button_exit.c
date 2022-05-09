/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** event_button_settings
*/

#include "rpg.h"

int manage_event_button_exit(rpg_t *game, sfVector2i mouse_pos)
{
    if (!game)
        return EPITECH_ERROR;
    if (button_is_clicked(game->btn->exit_b, mouse_pos) == true) {
        game->btn->wait = true;
        game->btn->button_clicked = "exit";
    }
    return EPITECH_SUCCESS;
}
