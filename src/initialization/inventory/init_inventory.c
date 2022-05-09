/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** init_inventory
*/

#include "rpg.h"

static int init_shape_bar_inventory_key(rpg_t *game)
{
    if (!game)
        return 84;
    sfRectangleShape_setSize(game->object[LINE_ITEM_KEY]->shape,
    (sfVector2f){50, 50});
    sfRectangleShape_setPosition(game->object[LINE_ITEM_KEY]->shape,
    (sfVector2f){819.5, 950});
    sfRectangleShape_setFillColor(game->object[LINE_ITEM_KEY]->shape,
    sfColor_fromRGBA(255, 55, 55, 150));
    return EPITECH_SUCCESS;
}

static int init_shape_bar_inventory(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    sfRectangleShape_setSize(game->object[LINE_ITEM_SWORD]->shape,
    (sfVector2f){50, 50});
    sfRectangleShape_setPosition(game->object[LINE_ITEM_SWORD]->shape,
    (sfVector2f){713.5, 950});
    sfRectangleShape_setFillColor(game->object[LINE_ITEM_SWORD]->shape,
    sfColor_fromRGBA(255, 255, 255, 150));
    sfRectangleShape_setSize(game->object[LINE_ITEM_POTION]->shape,
    (sfVector2f){50, 50});
    sfRectangleShape_setPosition(game->object[LINE_ITEM_POTION]->shape,
    (sfVector2f){766, 950});
    sfRectangleShape_setFillColor(game->object[LINE_ITEM_POTION]->shape,
    sfColor_fromRGBA(255, 155, 155, 150));
    init_shape_bar_inventory_key(game);
    return (EPITECH_SUCCESS);
}

static int init_items(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    sfSprite_setPosition(game->object[LINE_ITEM_SWORD]->sprite,
    (sfVector2f){20, 680});
    sfSprite_setScale(game->object[LINE_ITEM_SWORD]->sprite,
    (sfVector2f){0.5, 0.5});
    sfSprite_setPosition(game->object[LINE_ITEM_POTION]->sprite,
    (sfVector2f){400, 300});
    sfSprite_setScale(game->object[LINE_ITEM_POTION]->sprite,
    (sfVector2f){0.07, 0.07});
    sfSprite_setPosition(game->object[LINE_ITEM_KEY]->sprite,
    (sfVector2f){1150, 1150});
    sfSprite_setScale(game->object[LINE_ITEM_KEY]->sprite,
    (sfVector2f){0.5, 0.5});
    return (EPITECH_SUCCESS);
}

inventory_t *init_inventory(rpg_t *game)
{
    inventory_t *inventory = malloc(sizeof(inventory_t));

    if (!game || !inventory)
        return NULL;
    inventory->buffer = return_buffer_map(INVENTORY_FILE_PATH);
    inventory->tab = str_to_tab_path(inventory->buffer, '\n');
    init_items(game);
    inventory->item = init_item();
    init_shape_bar_inventory(game);
    sfSprite_setPosition(game->object[LINE_INVENTORY]->sprite,
    (sfVector2f){700, 815});
    return (inventory);
}
