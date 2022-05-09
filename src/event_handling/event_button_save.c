/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** event_button_settings
*/

#include "rpg.h"

int manage_event_button_load(rpg_t *game, sfVector2i mouse_pos)
{
    if (!game)
        return EPITECH_ERROR;
    if (button_is_clicked(game->btn->load_b, mouse_pos) == true) {
        game->btn->button_clicked = "load";
        game->btn->wait = true;
    }
    return (EPITECH_SUCCESS);
}
