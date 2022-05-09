/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** display_on_inventory
*/

#include "rpg.h"

static int display_item_arena_top(sfRenderWindow *window, rpg_t *game)
{
    if (!window || !game)
        return (EPITECH_ERROR);
    if (game->potion->heal_top == true) {
        sfSprite_setPosition(game->object[LINE_ITEM_POTION_TOP]->sprite,
        (sfVector2f){872, 950});
        sfRenderWindow_drawSprite(window,
        game->object[LINE_ITEM_POTION_TOP]->sprite, NULL);
    }
    return EPITECH_SUCCESS;
}

static int display_item_arena_down(sfRenderWindow *window, rpg_t *game)
{
    if (!window || !game)
        return (EPITECH_ERROR);
    if (game->potion->heal_down == true) {
        sfSprite_setPosition(game->object[LINE_ITEM_POTION_DOWN]->sprite,
        (sfVector2f){924.5, 950});
        sfRenderWindow_drawSprite(window,
        game->object[LINE_ITEM_POTION_DOWN]->sprite, NULL);
    }
    return EPITECH_SUCCESS;
}

static int display_item_arena_right(sfRenderWindow *window, rpg_t *game)
{
    if (!window || !game)
        return (EPITECH_ERROR);
    if (game->potion->heal_right == true) {
        sfSprite_setPosition(game->object[LINE_ITEM_POTION_RIGHT]->sprite,
        (sfVector2f){900, 950});
        sfRenderWindow_drawSprite(window,
        game->object[LINE_ITEM_POTION_RIGHT]->sprite, NULL);
    }
    return EPITECH_SUCCESS;
}

static int display_item_arena_left(sfRenderWindow *window, rpg_t *game)
{
    if (!window || !game)
        return (EPITECH_ERROR);
    if (game->potion->heal_left == true) {
        sfSprite_setPosition(game->object[LINE_ITEM_POTION_LEFT]->sprite,
        (sfVector2f){1029, 950});
        sfRenderWindow_drawSprite(window,
        game->object[LINE_ITEM_POTION_LEFT]->sprite, NULL);
    }
    return EPITECH_SUCCESS;
}

int display_item_arena_on_inventory(sfRenderWindow *window, rpg_t *game)
{
    if (!window || !game)
        return EPITECH_ERROR;
    display_item_arena_top(window, game);
    display_item_arena_down(window, game);
    display_item_arena_left(window, game);
    display_item_arena_right(window, game);
    return EPITECH_SUCCESS;
}
