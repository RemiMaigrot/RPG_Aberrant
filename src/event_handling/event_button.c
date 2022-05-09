/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** event_button
*/

#include "rpg.h"

int manage_event_menu_button(rpg_t *game, sfVector2i mouse_pos)
{
    if (!game)
        return EPITECH_ERROR;
    manage_event_button_controls(game, mouse_pos);
    manage_event_button_load(game, mouse_pos);
    manage_event_button_settings(game, mouse_pos);
    manage_event_button_htp(game, mouse_pos);
    manage_event_button_exit(game, mouse_pos);
    manage_event_button_new_game(game, mouse_pos);
    return (EPITECH_SUCCESS);
}
