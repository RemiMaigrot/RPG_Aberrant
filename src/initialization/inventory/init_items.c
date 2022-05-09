/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** init_inventory
*/

#include "rpg.h"

static item_t *init_item_sword(item_t *item)
{
    if (!item)
        return NULL;
    item->range_sword = sfCircleShape_create();
    sfCircleShape_setPosition(item->range_sword,
    (sfVector2f){20 - 5, 680 - 5});
    sfCircleShape_setRadius(item->range_sword, 20.0);
    sfCircleShape_setFillColor(item->range_sword,
    sfColor_fromRGBA(0, 171, 217, 150));
    return item;
}

static item_t *init_item_potion(item_t *item)
{
    if (!item)
        return NULL;
    item->range_potion = sfCircleShape_create();
    sfCircleShape_setPosition(item->range_potion,
    (sfVector2f){400 - 3, 300 - 3});
    sfCircleShape_setRadius(item->range_potion, 20.0);
    sfCircleShape_setFillColor(item->range_potion,
    sfColor_fromRGBA(0, 171, 217, 150));
    return item;
}

static item_t *init_item_key(item_t *item)
{
    if (!item)
        return NULL;
    item->range_key = sfCircleShape_create();
    sfCircleShape_setPosition(item->range_key,
    (sfVector2f){1150 - 5, 1150 - 5});
    sfCircleShape_setRadius(item->range_key, 20.0);
    sfCircleShape_setFillColor(item->range_key,
    sfColor_fromRGBA(0, 171, 217, 150));
    item->potion = false;
    return item;
}

item_t *init_item(void)
{
    item_t *item = malloc(sizeof(item_t));

    if (!item)
        return NULL;
    init_item_sword(item);
    init_item_potion(item);
    init_item_key(item);
    item->potion = false;
    item->sword = false;
    item->key = false;
    item->has_key = false;
    return (item);
}
