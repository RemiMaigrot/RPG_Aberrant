/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** bool_arena_click
*/

#include "rpg.h"

bool potion_top_inventory_is_clicked(rpg_t *game, sfVector2i mouse_pos)
{
    sfFloatRect rect = sfRectangleShape_getGlobalBounds(
        game->object[LINE_ITEM_POTION_TOP]->shape);

    if (!game)
        return false;
    if (sfFloatRect_contains(&rect, mouse_pos.x, mouse_pos.y))
        return true;
    return false;
}

bool potion_down_inventory_is_clicked(rpg_t *game, sfVector2i mouse_pos)
{
    sfFloatRect rect = sfRectangleShape_getGlobalBounds(
        game->object[LINE_ITEM_POTION_DOWN]->shape);

    if (!game)
        return false;
    if (sfFloatRect_contains(&rect, mouse_pos.x, mouse_pos.y))
        return true;
    return false;
}

bool potion_left_inventory_is_clicked(rpg_t *game, sfVector2i mouse_pos)
{
    sfFloatRect rect = sfRectangleShape_getGlobalBounds(
        game->object[LINE_ITEM_POTION_LEFT]->shape);

    if (!game)
        return false;
    if (sfFloatRect_contains(&rect, mouse_pos.x, mouse_pos.y))
        return true;
    return false;
}

bool potion_right_inventory_is_clicked(rpg_t *game, sfVector2i mouse_pos)
{
    sfFloatRect rect = sfRectangleShape_getGlobalBounds(
        game->object[LINE_ITEM_POTION_RIGHT]->shape);

    if (!game)
        return false;
    if (sfFloatRect_contains(&rect, mouse_pos.x, mouse_pos.y))
        return true;
    return false;
}
