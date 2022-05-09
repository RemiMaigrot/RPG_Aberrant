/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** manage_effect
*/

#include "rpg.h"

static int manage_lantern1(sfRenderWindow *window, rpg_t *game)
{
    game->all_effect->lantern1->time =
    sfClock_getElapsedTime(game->all_effect->lantern1->clock);
    game->all_effect->lantern1->seconds =
    game->all_effect->lantern1->time.microseconds / 1000000.0;
    if (game->all_effect->lantern1->seconds > 0.16) {
        sfSprite_setTextureRect(game->object[LINE_LIGHT_EFFECT1]->sprite,
        game->all_effect->lantern1->rect);
        sfClock_restart(game->all_effect->lantern1->clock);
    }
    light_movement(game, 55, 685, game->all_effect->lantern1);
    sfRenderWindow_drawSprite(window, game->object[LINE_LIGHT_EFFECT1]->sprite,
    NULL);
    return (EPITECH_SUCCESS);
}

static int manage_lantern2(sfRenderWindow *window, rpg_t *game)
{
    game->all_effect->lantern2->time =
    sfClock_getElapsedTime(game->all_effect->lantern2->clock);
    game->all_effect->lantern2->seconds =
    game->all_effect->lantern2->time.microseconds / 1000000.0;
    if (game->all_effect->lantern2->seconds > 0.16) {
        sfSprite_setTextureRect(game->object[LINE_LIGHT_EFFECT2]->sprite,
        game->all_effect->lantern2->rect);
        sfClock_restart(game->all_effect->lantern2->clock);
    }
    light_movement(game, 55, 685, game->all_effect->lantern2);
    sfRenderWindow_drawSprite(window, game->object[LINE_LIGHT_EFFECT2]->sprite,
    NULL);
    return (EPITECH_SUCCESS);
}

static int manage_lantern3(sfRenderWindow *window, rpg_t *game)
{
    game->all_effect->lantern3->time =
    sfClock_getElapsedTime(game->all_effect->lantern3->clock);
    game->all_effect->lantern3->seconds =
    game->all_effect->lantern3->time.microseconds / 1000000.0;
    if (game->all_effect->lantern3->seconds > 0.16) {
        sfSprite_setTextureRect(game->object[LINE_LIGHT_EFFECT3]->sprite,
        game->all_effect->lantern3->rect);
        sfClock_restart(game->all_effect->lantern3->clock);
    }
    light_movement(game, 55, 685, game->all_effect->lantern3);
    sfRenderWindow_drawSprite(window, game->object[LINE_LIGHT_EFFECT3]->sprite,
    NULL);
    return (EPITECH_SUCCESS);
}

static int manage_lantern4(sfRenderWindow *window, rpg_t *game)
{
    game->all_effect->lantern4->time =
    sfClock_getElapsedTime(game->all_effect->lantern4->clock);
    game->all_effect->lantern4->seconds =
    game->all_effect->lantern4->time.microseconds / 1000000.0;
    if (game->all_effect->lantern4->seconds > 0.16) {
        sfSprite_setTextureRect(game->object[LINE_LIGHT_EFFECT4]->sprite,
        game->all_effect->lantern4->rect);
        sfClock_restart(game->all_effect->lantern4->clock);
    }
    light_movement(game, 55, 685, game->all_effect->lantern4);
    sfRenderWindow_drawSprite(window, game->object[LINE_LIGHT_EFFECT4]->sprite,
    NULL);
    return (EPITECH_SUCCESS);
}

int manage_effect(sfRenderWindow *window, rpg_t *game)
{
    manage_lantern1(window, game);
    manage_lantern2(window, game);
    manage_lantern3(window, game);
    manage_lantern4(window, game);
    return (EPITECH_SUCCESS);
}
