/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** game_over_scene
*/

#include "rpg.h"

int manage_hover_button_game_over(rpg_t *game, sfVector2i mouse_pos)
{
    if (!game)
        return EPITECH_ERROR;
    manage_hover(game->pause_menu->menu_b, mouse_pos);
    manage_hover(game->pause_menu->exit_b, mouse_pos);
    return (EPITECH_SUCCESS);
}

int show_button_game_over(sfRenderWindow *window, rpg_t *game,
sfVector2i mouse_pos)
{
    if (!game || !window)
        return EPITECH_ERROR;
    manage_hover_button_game_over(game, mouse_pos);
    sfRenderWindow_drawSprite(window, game->pause_menu->menu_b->sprite,
    NULL);
    sfRenderWindow_drawSprite(window, game->pause_menu->exit_b->sprite,
    NULL);
    return (EPITECH_SUCCESS);
}

int manage_clicked_button_game_over(sfRenderWindow *window, rpg_t *game,
sfVector2i mouse_pos)
{
    if (!game || !window)
        return EPITECH_ERROR;
    if (button_is_clicked(game->pause_menu->menu_b, mouse_pos))
        game->change_menu = MENU;
    if (button_is_clicked(game->pause_menu->exit_b, mouse_pos))
        sfRenderWindow_close(window);
    return (EPITECH_SUCCESS);
}

int manage_game_over(sfRenderWindow *window, rpg_t *game, sfVector2i mouse_pos)
{
    if (!game || !window)
        return EPITECH_ERROR;
    sfRenderWindow_drawSprite(window, game->object[LINE_GAME_OVER]->sprite,
    NULL);
    show_button_game_over(window, game, mouse_pos);
    return (EPITECH_SUCCESS);
}
