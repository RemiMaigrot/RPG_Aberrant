/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** move_player
*/

#include "rpg.h"

static int manage_clock(rpg_t *game)
{
    game->player->time = sfClock_getElapsedTime(game->player->clock);
    game->player->seconds = game->player->time.microseconds / 1000000.0;
    return (EPITECH_SUCCESS);
}

static int show_player(sfRenderWindow *window, rpg_t *game)
{
    manage_clock(game);
    if (game->player->seconds > 0.15) {
        sfSprite_setTextureRect(game->object[LINE_PLAYER_RED]->sprite,
        game->player->rect);
        sfClock_restart(game->player->clock);
    }
    sfRenderWindow_drawSprite(window, game->object[LINE_PLAYER_RED]->sprite,
    NULL);
    sfSprite_setPosition(game->object[LINE_PLAYER_RED]->sprite,
    game->object[LINE_PLAYER_RED]->position);
    return (EPITECH_SUCCESS);
}

static int manage_left_right_movement(rpg_t *game)
{
    if (sfKeyboard_isKeyPressed(sfKeyQ) &&
    game->object[LINE_PLAYER_RED]->position.x > 14) {
        game->player->direction = "left";
        if (check_left_collision(game)) {
            movement_rect_left(game, 32, 94, 32);
            game->object[LINE_PLAYER_RED]->position.x
            -= game->view->speed_view;
        }
    }
    if (sfKeyboard_isKeyPressed(sfKeyD) &&
    game->object[LINE_PLAYER_RED]->position.x < 2640) {
        game->player->direction = "right";
        if (check_right_collision(game)) {
            movement_rect_right(game, 32, 94, 64);
            game->object[LINE_PLAYER_RED]->position.x
            += game->view->speed_view;
        }
    }
    return (EPITECH_SUCCESS);
}

int move_player(sfRenderWindow *window, rpg_t *game)
{
    if (sfKeyboard_isKeyPressed(sfKeyZ) &&
    game->object[LINE_PLAYER_RED]->position.y > 32) {
        if (check_up_collision(game)) {
            movement_rect_up(game, 32, 94, 96);
            game->object[LINE_PLAYER_RED]->position.y
            -= game->view->speed_view;
        }
    }
    if (sfKeyboard_isKeyPressed(sfKeyS) &&
    game->object[LINE_PLAYER_RED]->position.y < 1280) {
        if (check_down_collision(game)) {
            movement_rect_down(game, 32, 94, 0);
            game->object[LINE_PLAYER_RED]->position.y
            += game->view->speed_view;
        }
    }
    manage_left_right_movement(game);
    show_player(window, game);
    return (EPITECH_SUCCESS);
}
