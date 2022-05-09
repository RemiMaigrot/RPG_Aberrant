/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** manage_inventory_items
*/

#include "rpg.h"

int manage_inventory_sword_p(sfRenderWindow *window, rpg_t *game)
{
    if (!window || !game)
        return EPITECH_ERROR;
    if (game->inventory->item->potion == true) {
        sfSprite_setPosition(game->object[LINE_ITEM_POTION]->sprite,
        (sfVector2f){768, 950});
        sfRenderWindow_drawSprite(window,
        game->object[LINE_ITEM_POTION]->sprite, NULL);
    }
    if (game->inventory->item->key == true) {
        sfSprite_setPosition(game->object[LINE_ITEM_KEY]->sprite,
        (sfVector2f){819.5, 950});
        sfRenderWindow_drawSprite(window,
        game->object[LINE_ITEM_KEY]->sprite, NULL);
    }
    return (EPITECH_SUCCESS);
}
