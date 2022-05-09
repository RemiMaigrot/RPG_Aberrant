/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** manage_event
*/

#include "rpg.h"

static int exit_event(sfRenderWindow *window, sfEvent event)
{
    if (!window)
        return EPITECH_ERROR;
    if (event.type == sfEvtClosed
    || (event.key.code == sfKeyP && event.type == sfEvtKeyPressed))
        sfRenderWindow_close(window);
    return (EPITECH_SUCCESS);
}

int manage_all_event(sfRenderWindow *window, rpg_t *game, sfEvent event,
sfVector2i mouse_pos)
{
    if (!window || !game)
        return EPITECH_ERROR;
    exit_event(window, event);
    mouse_event_in_menu(game, event, mouse_pos);
    mouse_event_in_game(window, game, event, mouse_pos);
    keyboard_event(game, event);
    return (EPITECH_SUCCESS);
}
