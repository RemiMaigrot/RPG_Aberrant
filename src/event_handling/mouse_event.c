/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** event_mouse
*/

#include "rpg.h"

int mouse_event_in_menu(rpg_t *game, sfEvent event, sfVector2i mouse_pos)
{
    if (!game)
        return EPITECH_ERROR;
    if (event.type == sfEvtMouseButtonPressed) {
        if (game->change_menu == SAVE)
            manage_save_menu(game, mouse_pos);
        if (game->change_menu == MENU)
            manage_event_menu_button(game, mouse_pos);
        if (game->change_menu == SETTINGS) {
            manage_settings_menu(game, mouse_pos);
            manage_change_skin(game, mouse_pos);
        }
        if (game->change_menu == CONTROLS)
            manage_controls_menu(game, mouse_pos);
        if (game->change_menu == HOW_TO_PLAY)
            manage_how_to_play_menu(game, mouse_pos);
    }
    return (EPITECH_SUCCESS);
}

int mouse_event_in_game(sfRenderWindow *window, rpg_t *game, sfEvent event,
sfVector2i mouse_pos)
{
    if (!game || !window)
        return EPITECH_ERROR;
    if (event.type == sfEvtMouseButtonPressed) {
        if (game->change_menu == GAME)
            manage_inventory_item(game, mouse_pos);
        if (game->change_menu == PAUSE)
            manage_clicked_button_pause(window, game, mouse_pos);
        if (game->change_menu == GAME_OVER || game->change_menu == WIN)
            manage_clicked_button_game_over(window, game, mouse_pos);
        return (EPITECH_SUCCESS);
    }
    return EPITECH_SUCCESS;
}
