/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** menu_scene
*/

#include "rpg.h"

int manage_menu_scene(sfRenderWindow *window, rpg_t *game)
{
    if (!game || !window)
        return EPITECH_ERROR;
    sfRenderWindow_drawSprite(window, game->object[LINE_HOME_MENU]->sprite,
    NULL);
    sfRenderWindow_drawSprite(window, game->btn->new_game_b->sprite, NULL);
    sfRenderWindow_drawSprite(window, game->btn->load_b->sprite, NULL);
    sfRenderWindow_drawSprite(window, game->btn->controls_b->sprite, NULL);
    sfRenderWindow_drawSprite(window, game->btn->exit_b->sprite, NULL);
    sfRenderWindow_drawSprite(window, game->btn->how_to_play_b->sprite, NULL);
    sfRenderWindow_drawSprite(window, game->btn->settings_b->sprite, NULL);
    return (EPITECH_SUCCESS);
}
