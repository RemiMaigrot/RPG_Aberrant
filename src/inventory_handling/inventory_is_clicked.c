/*
** EPITECH PROJECT, 2022
** Visual Studio Live Share (Workspace)
** File description:
** inventory_slot
*/

#include "rpg.h"

bool potion_inventory_is_clicked(rpg_t *game, sfVector2i mouse_pos)
{
    sfFloatRect rect =
    sfRectangleShape_getGlobalBounds(game->object[LINE_ITEM_POTION]->shape);

    if (!game)
        return false;
    if (sfFloatRect_contains(&rect, mouse_pos.x, mouse_pos.y))
        return true;
    return false;
}

bool key_inventory_is_clicked(rpg_t *game, sfVector2i mouse_pos)
{
    sfFloatRect rect =
    sfRectangleShape_getGlobalBounds(game->object[LINE_ITEM_KEY]->shape);

    if (!game)
        return false;
    if (sfFloatRect_contains(&rect, mouse_pos.x, mouse_pos.y))
        return true;
    return false;
}

int manage_inventory_item(rpg_t *game, sfVector2i mouse_pos)
{
    if (!game)
        return EPITECH_ERROR;
    if (potion_inventory_is_clicked(game, mouse_pos)
    && game->inventory->item->potion) {
        if (game->player->life <= 100) {
            game->player->life += 45;
            game->inventory->item->potion = false;
        }
    }
    manage_click_all_potion_arena(game, mouse_pos);
    if (key_inventory_is_clicked(game, mouse_pos)) {
        game->inventory->item->key_clicked = true;
    }
    return (EPITECH_SUCCESS);
}
