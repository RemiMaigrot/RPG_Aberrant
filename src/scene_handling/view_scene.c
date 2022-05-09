/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** view_scene
*/

#include "rpg.h"

int manage_view(sfRenderWindow *window, rpg_t *game)
{
    sfView_setCenter(game->view->view,
    (sfVector2f){game->object[LINE_PLAYER_RED]->position.x + 10,
    game->object[LINE_PLAYER_RED]->position.y + 10});
    sfRenderWindow_setView(window, game->view->view);
    sfRenderWindow_drawSprite(window, game->object[LINE_DEFAULT_LAYER]->sprite,
    NULL);
    sfSprite_setPosition(game->object[LINE_DEFAULT_LAYER]->sprite,
    game->object[LINE_DEFAULT_LAYER]->position);
    return (EPITECH_SUCCESS);
}
