/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** inventory_scene
*/

#include "rpg.h"

static int display_item_on_inventory(sfRenderWindow *window, rpg_t *game)
{
    if (!game || !window)
        return EPITECH_ERROR;
    if (game->inventory->item->sword == true) {
        sfSprite_setScale(game->object[LINE_ITEM_SWORD]->sprite,
        (sfVector2f){0.8, 0.8});
        sfSprite_setPosition(game->object[LINE_ITEM_SWORD]->sprite,
        (sfVector2f){715, 950});
        sfRenderWindow_drawSprite(window,
        game->object[LINE_ITEM_SWORD]->sprite, NULL);
    }
    manage_inventory_sword_p(window, game);
    return (EPITECH_SUCCESS);
}

static int display_item(sfRenderWindow *window, rpg_t *game)
{
    if (!window || !game)
        return (EPITECH_ERROR);
    if (game->inventory->item->sword == false) {
        sfRenderWindow_drawSprite(window,
        game->object[LINE_ITEM_SWORD]->sprite, NULL);
    }
    if (game->inventory->item->potion == false) {
        sfSprite_setPosition(game->object[LINE_ITEM_POTION]->sprite,
        (sfVector2f){400, 300});
        sfRenderWindow_drawSprite(window,
        game->object[LINE_ITEM_POTION]->sprite, NULL);
    }
    return (EPITECH_SUCCESS);
}

int display_arena_potion_inventory(sfRenderWindow *window, rpg_t *game)
{
    if (!window || !game)
        return (EPITECH_ERROR);
    sfRenderWindow_drawRectangleShape(window,
    game->object[LINE_ITEM_POTION_TOP]->shape, NULL);
    sfRenderWindow_drawRectangleShape(window,
    game->object[LINE_ITEM_POTION_DOWN]->shape, NULL);
    sfRenderWindow_drawRectangleShape(window,
    game->object[LINE_ITEM_POTION_LEFT]->shape, NULL);
    sfRenderWindow_drawRectangleShape(window,
    game->object[LINE_ITEM_POTION_RIGHT]->shape, NULL);
    return (EPITECH_SUCCESS);
}

static int display_inventory(sfRenderWindow *window, rpg_t *game)
{
    if (!window || !game)
        return (EPITECH_ERROR);
    sfRenderWindow_drawSprite(window, game->object[LINE_INVENTORY]->sprite,
    NULL);
    sfRenderWindow_drawRectangleShape(window,
    game->object[LINE_ITEM_SWORD]->shape, NULL);
    sfRenderWindow_drawRectangleShape(window,
    game->object[LINE_ITEM_POTION]->shape, NULL);
    sfRenderWindow_drawRectangleShape(window,
    game->object[LINE_ITEM_KEY]->shape, NULL);
    display_arena_potion_inventory(window, game);
    manage_player_life(game);
    sfRenderWindow_drawRectangleShape(window,
    game->object[LINE_PLAYER_RED]->shape,
    NULL);
    return (EPITECH_SUCCESS);
}

int manage_inventory(sfRenderWindow *window, rpg_t *game)
{
    if (!window || !game)
        return (EPITECH_ERROR);
    sfRenderWindow_setView(window, game->view_menu->view);
    manage_quest(window, game);
    display_inventory(window, game);
    retrieve_item(game);
    display_item_on_inventory(window, game);
    display_item_arena_on_inventory(window, game);
    sfRenderWindow_setView(window, game->view->view);
    display_item(window, game);
    display_arena_potion(window, game);
    return (EPITECH_SUCCESS);
}
