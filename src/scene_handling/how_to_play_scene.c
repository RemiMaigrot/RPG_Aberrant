/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** how_to_player_scene
*/

#include "rpg.h"

int manage_how_to_play_scene(sfRenderWindow *window, rpg_t *game,
sfVector2i mouse_pos)
{
    if (!game)
        return EPITECH_ERROR;
    manage_hover(game->btn->back_b, mouse_pos);
    sfRenderWindow_drawSprite(window, game->object[LINE_HTP_MENU]->sprite,
    NULL);
    sfRenderWindow_drawSprite(window, game->btn->back_b->sprite, NULL);
    return (EPITECH_SUCCESS);
}
