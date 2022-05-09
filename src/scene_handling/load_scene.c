/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** load_scene
*/

#include "rpg.h"

int manage_load_scene(sfRenderWindow *window, rpg_t *game,
sfVector2i mouse_pos)
{
    if (!game || !window)
        return EPITECH_ERROR;
    manage_hover(game->btn->back_b, mouse_pos);
    sfRenderWindow_drawSprite(window, game->object[LINE_CREDITS]->sprite,
    NULL);
    sfRenderWindow_drawSprite(window, game->btn->back_b->sprite, NULL);
    return (EPITECH_SUCCESS);
}
