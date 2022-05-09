/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** init_tp_to_arena
*/

#include "rpg.h"

static sfIntRect init_rect_tp(void)
{
    sfIntRect rect;

    rect.top = 5;
    rect.left = 10;
    rect.width = 190;
    rect.height = 190;
    return (rect);
}

tp_t *init_tp_to_arena(rpg_t *game)
{
    tp_t *tp_boss = malloc(sizeof(tp_t));

    if (!game)
        return NULL;
    tp_boss->clock = sfClock_create();
    tp_boss->time = sfClock_getElapsedTime(tp_boss->clock);
    tp_boss->seconds = 0.0;
    tp_boss->rect = init_rect_tp();
    sfSprite_setScale(game->object[LINE_TP_TO_ARENA]->sprite,
    (sfVector2f){0.5, 0.5});
    sfSprite_setTextureRect(game->object[LINE_TP_TO_ARENA]->sprite,
    tp_boss->rect);
    sfSprite_setPosition(game->object[LINE_TP_TO_ARENA]->sprite,
    (sfVector2f){1200, 100});
    sfSprite_setPosition(game->object[LINE_arena_LAYER]->sprite,
    (sfVector2f){2000, 0});
    tp_boss->has_tp = false;
    return (tp_boss);
}
