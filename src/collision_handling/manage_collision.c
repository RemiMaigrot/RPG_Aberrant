/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** manage_collision
*/

#include "rpg.h"

bool check_up_collision(rpg_t *game)
{
    sfFloatRect rect_up =
    sfSprite_getGlobalBounds(game->object[LINE_PLAYER_RED]->sprite);
    int limit_y = 0;
    int limit_x = 0;

    if (!game)
        return (false);
    rect_up.top -= game->view->speed_view;
    limit_y = rect_up.top + rect_up.height;
    limit_x = rect_up.left + rect_up.width;
    for (int y = rect_up.top; y < limit_y; y++) {
        if (collision_pixel_up(game, limit_x, y, rect_up) == false)
            return (false);
    }
    return true;
}

bool check_right_collision(rpg_t *game)
{
    sfFloatRect rect_right =
    sfSprite_getGlobalBounds(game->object[LINE_PLAYER_RED]->sprite);
    int limit_y = 0;
    int limit_x = 0;

    if (!game)
        return (false);
    if (game->tp_boss->has_tp == false &&
    game->object[LINE_PLAYER_RED]->position.x >= 1280)
        return (false);
    rect_right.left += game->view->speed_view;
    limit_y = rect_right.top + rect_right.height;
    limit_x = rect_right.left + rect_right.width;
    for (int y = rect_right.top; y < limit_y; y++) {
        if (collision_pixel_right(game, limit_x, y, rect_right) == false)
            return (false);
    }
    return true;
}

bool check_left_collision(rpg_t *game)
{
    sfFloatRect rect_left =
    sfSprite_getGlobalBounds(game->object[LINE_PLAYER_RED]->sprite);
    int limit_y = 0;
    int limit_x = 0;

    if (!game)
        return (false);
    rect_left.left -= game->view->speed_view;
    limit_y = rect_left.top + rect_left.height;
    limit_x = rect_left.left + rect_left.width;
    for (int y = rect_left.top; y < limit_y; y++) {
        if (collision_pixel_left(game, limit_x, y, rect_left) == false)
            return (false);
    }
    return true;
}

bool check_down_collision(rpg_t *game)
{
    sfFloatRect rect_down =
    sfSprite_getGlobalBounds(game->object[LINE_PLAYER_RED]->sprite);
    int limit_y = 0;
    int limit_x = 0;

    if (!game)
        return (false);
    rect_down.top += game->view->speed_view;
    limit_y = rect_down.top + rect_down.height;
    limit_x = rect_down.left + rect_down.width;
    for (int y = rect_down.top; y < limit_y; y++) {
        if (collision_pixel_down(game, limit_x, y, rect_down) == false)
            return (false);
    }
    return true;
}
