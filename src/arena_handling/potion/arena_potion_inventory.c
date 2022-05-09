/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** arena_potion_inventory
*/

#include "rpg.h"

int init_shape_bar_inventory_arena_potion_left_right(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    sfRectangleShape_setSize(game->object[LINE_ITEM_POTION_LEFT]->shape,
    (sfVector2f){50, 50});
    sfRectangleShape_setPosition(game->object[LINE_ITEM_POTION_LEFT]->shape,
    (sfVector2f){977, 950});
    sfRectangleShape_setFillColor(game->object[LINE_ITEM_POTION_LEFT]->shape,
    sfColor_fromRGBA(255, 155, 155, 150));
    sfRectangleShape_setSize(game->object[LINE_ITEM_POTION_RIGHT]->shape,
    (sfVector2f){50, 50});
    sfRectangleShape_setPosition(game->object[LINE_ITEM_POTION_RIGHT]->shape,
    (sfVector2f){1029.5, 950});
    sfRectangleShape_setFillColor(game->object[LINE_ITEM_POTION_RIGHT]->shape,
    sfColor_fromRGBA(255, 155, 155, 150));
    return EPITECH_SUCCESS;
}

int init_shape_bar_inventory_arena_potion_top_down(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    sfRectangleShape_setSize(game->object[LINE_ITEM_POTION_TOP]->shape,
    (sfVector2f){50, 50});
    sfRectangleShape_setPosition(game->object[LINE_ITEM_POTION_TOP]->shape,
    (sfVector2f){872, 950});
    sfRectangleShape_setFillColor(game->object[LINE_ITEM_POTION_TOP]->shape,
    sfColor_fromRGBA(255, 155, 155, 150));
    sfRectangleShape_setSize(game->object[LINE_ITEM_POTION_DOWN]->shape,
    (sfVector2f){50, 50});
    sfRectangleShape_setPosition(game->object[LINE_ITEM_POTION_DOWN]->shape,
    (sfVector2f){924.5, 950});
    sfRectangleShape_setFillColor(game->object[LINE_ITEM_POTION_DOWN]->shape,
    sfColor_fromRGBA(255, 155, 155, 150));
    return EPITECH_SUCCESS;
}
