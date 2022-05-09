/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** settings_scene
*/

#include "rpg.h"

static int show_skin(sfRenderWindow *window, rpg_t *game)
{
    if (!game || !window)
        return EPITECH_ERROR;
    sfRenderWindow_drawSprite(window,
    game->object[LINE_PLAYER_BLUE_RECT]->sprite, NULL);
    sfRenderWindow_drawSprite(window,
    game->object[LINE_PLAYER_BROWN_RECT]->sprite, NULL);
    sfRenderWindow_drawSprite(window,
    game->object[LINE_PLAYER_BLACK_RECT]->sprite, NULL);
    sfSprite_setPosition(game->object[LINE_CHOICE_SHADOW]->sprite,
    game->object[LINE_CHOICE_SHADOW]->position);
    sfRenderWindow_drawSprite(window, game->object[LINE_CHOICE_SHADOW]->sprite,
    NULL);
    return (EPITECH_SUCCESS);
}

static int manage_choose_player(sfRenderWindow *window, rpg_t *game)
{
    if (!game || !window)
        return EPITECH_ERROR;
    sfSprite_setTextureRect(game->object[LINE_PLAYER_RED]->sprite,
    game->player->rect);
    sfSprite_setScale(game->object[LINE_PLAYER_RED]->sprite,
    (sfVector2f){3.5, 3.5});
    sfSprite_setPosition(game->object[LINE_PLAYER_RED]->sprite,
    game->object[LINE_PLAYER_RED]->position);
    sfRenderWindow_drawSprite(window,
    game->object[LINE_PLAYER_RED]->sprite, NULL);
    game->object[LINE_PLAYER_RED]->position.x = 940;
    game->object[LINE_PLAYER_RED]->position.y = 750;
    show_skin(window, game);
    return (EPITECH_SUCCESS);
}

int manage_settings_scene(sfRenderWindow *window, rpg_t *game,
sfVector2i mouse_pos)
{
    if (!game || !window)
        return EPITECH_ERROR;
    manage_hover(game->btn->back_b, mouse_pos);
    sfRenderWindow_drawSprite(window,
    game->object[LINE_HOME_MENU]->sprite, NULL);
    sfRenderWindow_drawSprite(window, game->btn->back_b->sprite, NULL);
    manage_hover(game->set_vol->left, mouse_pos);
    manage_hover(game->set_vol->right, mouse_pos);
    display_menu_hud(window, game);
    sfRenderWindow_drawRectangleShape(window, game->set_vol->rect_volume,
    NULL);
    sfRenderWindow_drawSprite(window, game->set_vol->left->sprite, NULL);
    sfRenderWindow_drawSprite(window, game->set_vol->right->sprite, NULL);
    manage_choose_player(window, game);
    return (EPITECH_SUCCESS);
}
