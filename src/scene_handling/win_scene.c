/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** win_scene
*/

#include "rpg.h"

int manage_win_scene(sfRenderWindow *window, rpg_t *game,
sfVector2i mouse_pos)
{
    if (!game || !window)
        return (EPITECH_ERROR);
    sfSprite_setPosition(game->object[LINE_WIN]->sprite,
    (sfVector2f){300, 200});
    sfRenderWindow_drawSprite(window, game->object[LINE_WIN]->sprite, NULL);
    sfSprite_setScale(game->object[LINE_WIN]->sprite,
    (sfVector2f){1.5, 1.5});
    show_button_game_over(window, game, mouse_pos);
    return (EPITECH_ERROR);
}
