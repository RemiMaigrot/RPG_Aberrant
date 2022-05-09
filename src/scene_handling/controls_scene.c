/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** controls_scene
*/

#include "rpg.h"

int manage_controls_scene(sfRenderWindow *window, rpg_t *game,
sfVector2i mouse_pos)
{
    if (!game || !window)
        return EPITECH_ERROR;
    manage_hover(game->btn->back_b, mouse_pos);
    sfRenderWindow_drawSprite(window,
    game->object[LINE_HOME_MENU]->sprite, NULL);
    sfRenderWindow_drawSprite(window, game->btn->back_b->sprite, NULL);
    display_menu_hud(window, game);
    return (EPITECH_SUCCESS);
}
