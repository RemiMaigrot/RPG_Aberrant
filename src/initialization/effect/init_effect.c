/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** init_effect
*/

#include "rpg.h"

static effect_t *init_lantern1(rpg_t *game, int pos_x, int pos_y)
{
    effect_t *effect = malloc(sizeof(effect_t));

    if (!game || !effect)
        return NULL;
    effect->rect = init_rect_effect();
    effect->clock = sfClock_create();
    effect->time = sfClock_getElapsedTime(effect->clock);
    effect->seconds = 0.0;
    game->object[LINE_LIGHT_EFFECT1]->position.x = pos_x;
    game->object[LINE_LIGHT_EFFECT1]->position.y = pos_y;
    sfSprite_setPosition(game->object[LINE_LIGHT_EFFECT1]->sprite,
    game->object[LINE_LIGHT_EFFECT1]->position);
    return (effect);
}

static effect_t *init_lantern2(rpg_t *game, int pos_x, int pos_y)
{
    effect_t *effect = malloc(sizeof(effect_t));

    if (!game)
        return NULL;
    effect->rect = init_rect_effect();
    effect->clock = sfClock_create();
    effect->time = sfClock_getElapsedTime(effect->clock);
    effect->seconds = 0.0;
    game->object[LINE_LIGHT_EFFECT2]->position.x = pos_x;
    game->object[LINE_LIGHT_EFFECT2]->position.y = pos_y;
    sfSprite_setPosition(game->object[LINE_LIGHT_EFFECT2]->sprite,
    game->object[LINE_LIGHT_EFFECT2]->position);
    return (effect);
}

static effect_t *init_lantern3(rpg_t *game, int pos_x, int pos_y)
{
    effect_t *effect = malloc(sizeof(effect_t));

    if (!game)
        return NULL;
    effect->rect = init_rect_effect();
    effect->clock = sfClock_create();
    effect->time = sfClock_getElapsedTime(effect->clock);
    effect->seconds = 0.0;
    game->object[LINE_LIGHT_EFFECT3]->position.x = pos_x;
    game->object[LINE_LIGHT_EFFECT3]->position.y = pos_y;
    sfSprite_setPosition(game->object[LINE_LIGHT_EFFECT3]->sprite,
    game->object[LINE_LIGHT_EFFECT3]->position);
    return (effect);
}

static effect_t *init_lantern4(rpg_t *game, int pos_x, int pos_y)
{
    effect_t *effect = malloc(sizeof(effect_t));

    if (!game)
        return NULL;
    effect->rect = init_rect_effect();
    effect->clock = sfClock_create();
    effect->time = sfClock_getElapsedTime(effect->clock);
    effect->seconds = 0.0;
    game->object[LINE_LIGHT_EFFECT4]->position.x = pos_x;
    game->object[LINE_LIGHT_EFFECT4]->position.y = pos_y;
    sfSprite_setPosition(game->object[LINE_LIGHT_EFFECT4]->sprite,
    game->object[LINE_LIGHT_EFFECT4]->position);
    return (effect);
}

all_effect_t *init_all_effect(rpg_t *game)
{
    all_effect_t *all_effect = malloc(sizeof(all_effect_t));

    if (!game || !all_effect)
        return NULL;
    all_effect->lantern1 = init_lantern1(game, 430, 767);
    all_effect->lantern2 = init_lantern2(game, 430, 870);
    all_effect->lantern3 = init_lantern3(game, 1190, 553);
    all_effect->lantern4 = init_lantern4(game, 365, 105);
    return (all_effect);
}
