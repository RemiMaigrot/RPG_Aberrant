/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** loop_event
*/

#include "rpg.h"

int loop_event(sfRenderWindow *window, rpg_t *game, sfVector2i mouse_pos)
{
    sfEvent event = {0};

    if (!window || !game)
        return EPITECH_ERROR;
    while (sfRenderWindow_pollEvent(window, &event))
        manage_all_event(window, game, event, mouse_pos);
    return (EPITECH_SUCCESS);
}
