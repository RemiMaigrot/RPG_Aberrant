/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** event_button_settings
*/

#include "rpg.h"

int manage_event_button_settings(rpg_t *game, sfVector2i mouse_pos)
{
    if (!game)
        return EPITECH_ERROR;
    if (button_is_clicked(game->btn->settings_b, mouse_pos) == true) {
        game->btn->button_clicked = "settings";
        game->btn->wait = true;
    }
    return (EPITECH_SUCCESS);
}

int manage_volume(rpg_t *game, sfVector2i mouse_pos)
{
    if (!game)
        return EPITECH_ERROR;
    manage_vol_rect_left(game, mouse_pos);
    manage_vol_rect_right(game, mouse_pos);
    return (EPITECH_SUCCESS);
}
