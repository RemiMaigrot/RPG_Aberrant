/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** manage_arena
*/

#include "rpg.h"

int manage_arena(sfRenderWindow *window, rpg_t *game)
{
    if (!window || !game)
        return (EPITECH_ERROR);
    sfRenderWindow_drawSprite(window, game->object[LINE_arena_LAYER]->sprite,
    NULL);
    if (game->tp_boss->has_tp == true) {
        manage_boss(window, game);
    }
    return (EPITECH_SUCCESS);
}
