/*
** EPITECH PROJECT, 2022
** Visual Studio Live Share (Workspace)
** File description:
** init_arena_potion
*/

#include "rpg.h"

static int init_arena_potion_state(arena_potion_t *potion)
{
    if (!potion)
        return EPITECH_ERROR;
    potion->heal_top = false;
    potion->heal_down = false;
    potion->heal_left = false;
    potion->heal_right = false;
    return EPITECH_SUCCESS;
}

arena_potion_t *init_arena_potion_radius_top_down(arena_potion_t *potion)
{
    if (!potion)
        return NULL;
    potion->range_heal_top = sfCircleShape_create();
    sfCircleShape_setPosition(potion->range_heal_top,
    (sfVector2f){2100 - 3, 200 - 3});
    sfCircleShape_setRadius(potion->range_heal_top, 20.0);
    sfCircleShape_setFillColor(potion->range_heal_top,
    sfColor_fromRGBA(0, 171, 217, 150));
    potion->range_heal_down = sfCircleShape_create();
    sfCircleShape_setPosition(potion->range_heal_down,
    (sfVector2f){2110 - 3, 210 - 3});
    sfCircleShape_setRadius(potion->range_heal_down, 20.0);
    sfCircleShape_setFillColor(potion->range_heal_top,
    sfColor_fromRGBA(0, 171, 217, 150));
    return potion;
}

arena_potion_t *init_arena_potion_radius_left_right(arena_potion_t *potion)
{
    if (!potion)
        return NULL;
    potion->range_heal_left = sfCircleShape_create();
    sfCircleShape_setPosition(potion->range_heal_left,
    (sfVector2f){2130 - 3, 230 - 3});
    sfCircleShape_setRadius(potion->range_heal_left, 20.0);
    sfCircleShape_setFillColor(potion->range_heal_left,
    sfColor_fromRGBA(0, 171, 217, 150));
    potion->range_heal_right = sfCircleShape_create();
    sfCircleShape_setPosition(potion->range_heal_right,
    (sfVector2f){2140 - 3, 240 - 3});
    sfCircleShape_setRadius(potion->range_heal_right, 20.0);
    sfCircleShape_setFillColor(potion->range_heal_right,
    sfColor_fromRGBA(0, 171, 217, 150));
    return potion;
}

static int init_arena_item_pos_scale(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    sfSprite_setPosition(game->object[LINE_ITEM_POTION_TOP]->sprite,
    (sfVector2f){2100, 200});
    sfSprite_setScale(game->object[LINE_ITEM_POTION_TOP]->sprite,
    (sfVector2f){0.07, 0.07});
    sfSprite_setPosition(game->object[LINE_ITEM_POTION_DOWN]->sprite,
    (sfVector2f){2110, 200});
    sfSprite_setScale(game->object[LINE_ITEM_POTION_DOWN]->sprite,
    (sfVector2f){0.07, 0.07});
    sfSprite_setPosition(game->object[LINE_ITEM_POTION_LEFT]->sprite,
    (sfVector2f){2130, 230});
    sfSprite_setScale(game->object[LINE_ITEM_POTION_LEFT]->sprite,
    (sfVector2f){0.07, 0.07});
    sfSprite_setPosition(game->object[LINE_ITEM_POTION_RIGHT]->sprite,
    (sfVector2f){2140, 240});
    sfSprite_setScale(game->object[LINE_ITEM_POTION_RIGHT]->sprite,
    (sfVector2f){0.07, 0.07});
    return EPITECH_SUCCESS;
}

arena_potion_t *init_arena_potion(rpg_t *game)
{
    arena_potion_t *potion = malloc(sizeof(arena_potion_t));

    if (!game || !potion)
        return NULL;
    init_arena_potion_state(potion);
    init_arena_item_pos_scale(game);
    init_arena_potion_radius_top_down(potion);
    init_arena_potion_radius_left_right(potion);
    return (potion);
}
