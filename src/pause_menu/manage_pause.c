/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** manage_pause
*/

#include "rpg.h"

int manage_hover(button_t *button, sfVector2i mouse_pos)
{
    sfFloatRect rect = sfRectangleShape_getGlobalBounds(button->shape);
    sfVector2f tmp = {(button->sprite_pos.x - 5),
    (button->sprite_pos.y - 5)};

    if (!button)
        return EPITECH_ERROR;
    if (sfFloatRect_contains(&rect, mouse_pos.x, mouse_pos.y)) {
        sfSprite_setPosition(button->sprite, tmp);
        mouse_on_button(button);
    } else {
        sfSprite_setPosition(button->sprite, button->sprite_pos);
        mouse_not_on_button(button);
    }
    return EPITECH_SUCCESS;
}

static int manage_hover_button_pause(rpg_t *game, sfVector2i mouse_pos)
{
    if (!game)
        return EPITECH_ERROR;
    manage_hover(game->pause_menu->resume_b, mouse_pos);
    manage_hover(game->pause_menu->menu_b, mouse_pos);
    manage_hover(game->pause_menu->exit_b, mouse_pos);
    return (EPITECH_SUCCESS);
}

int manage_clicked_button_pause(sfRenderWindow *window, rpg_t *game,
sfVector2i mouse_pos)
{
    if (!game || !window)
        return EPITECH_ERROR;
    if (button_is_clicked(game->pause_menu->resume_b, mouse_pos)) {
        sfView_setSize(game->view->view, (sfVector2f){500, 250});
        game->change_menu = GAME;
    }
    if (button_is_clicked(game->pause_menu->menu_b, mouse_pos)) {
        game->change_menu = MENU;
        sfMusic_stop(game->set_vol->game_music);
        sfMusic_play(game->set_vol->theme);
    }
    if (button_is_clicked(game->pause_menu->exit_b, mouse_pos)) {
        sfRenderWindow_close(window);
    }
    return (EPITECH_SUCCESS);
}

static int show_button(sfRenderWindow *window, rpg_t *game,
sfVector2i mouse_pos)
{
    if (!game || !window)
        return EPITECH_ERROR;
    manage_hover_button_pause(game, mouse_pos);
    sfRenderWindow_drawSprite(window, game->pause_menu->resume_b->sprite,
    NULL);
    sfRenderWindow_drawSprite(window, game->pause_menu->menu_b->sprite,
    NULL);
    sfRenderWindow_drawSprite(window, game->pause_menu->exit_b->sprite,
    NULL);
    return (EPITECH_SUCCESS);
}

int manage_pause_scene(sfRenderWindow *window, rpg_t *game,
sfVector2i mouse_pos)
{
    if (!game)
        return EPITECH_ERROR;
    sfRenderWindow_drawSprite(window, game->object[LINE_HOME_MENU]->sprite,
    NULL);
    show_button(window, game, mouse_pos);
    return (EPITECH_SUCCESS);
}
