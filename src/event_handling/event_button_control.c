/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** event_button_how
*/

#include "rpg.h"

int manage_event_button_controls(rpg_t *game, sfVector2i mouse_pos)
{
    if (!game)
        return EPITECH_ERROR;
    if (button_is_clicked(game->btn->controls_b, mouse_pos) == true) {
        game->btn->button_clicked = "controls";
        game->btn->wait = true;
    }
    return (EPITECH_SUCCESS);
}
