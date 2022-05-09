/*
** EPITECH PROJECT, 2022
** Visual Studio Live Share (Workspace)
** File description:
** display_potion
*/

#include "rpg.h"

static int display_arena_potion_top(sfRenderWindow *window, rpg_t *game)
{
    if (!window || !game)
        return (EPITECH_ERROR);
    if (game->potion->heal_top == false) {
        sfSprite_setPosition(
        game->object[LINE_ITEM_POTION_TOP]->sprite, (sfVector2f){2100, 200});
        sfRenderWindow_drawSprite(window,
            game->object[LINE_ITEM_POTION_TOP]->sprite, NULL);
    }
    return (EPITECH_SUCCESS);
}

static int display_arena_potion_down(sfRenderWindow *window, rpg_t *game)
{
    if (!window || !game)
        return (EPITECH_ERROR);
    if (game->potion->heal_down == false) {
        sfSprite_setPosition(
        game->object[LINE_ITEM_POTION_DOWN]->sprite, (sfVector2f){2110, 210});
        sfRenderWindow_drawSprite(window,
            game->object[LINE_ITEM_POTION_DOWN]->sprite, NULL);
    }
    return (EPITECH_SUCCESS);
}

static int display_arena_potion_left(sfRenderWindow *window, rpg_t *game)
{
    if (!window || !game)
        return (EPITECH_ERROR);
    if (game->potion->heal_left == false) {
        sfSprite_setPosition(
        game->object[LINE_ITEM_POTION_LEFT]->sprite, (sfVector2f){2130, 230});
        sfRenderWindow_drawSprite(window,
            game->object[LINE_ITEM_POTION_LEFT]->sprite, NULL);
    }
    return (EPITECH_SUCCESS);
}

static int display_arena_potion_right(sfRenderWindow *window, rpg_t *game)
{
    if (!window || !game)
        return (EPITECH_ERROR);
    if (game->potion->heal_right == false) {
        sfSprite_setPosition(
        game->object[LINE_ITEM_POTION_RIGHT]->sprite, (sfVector2f){2140, 240});
        sfRenderWindow_drawSprite(window,
            game->object[LINE_ITEM_POTION_RIGHT]->sprite, NULL);
    }
    return (EPITECH_SUCCESS);
}

int display_arena_potion(sfRenderWindow *window, rpg_t *game)
{
    if (!window || !game)
        return EPITECH_ERROR;
    display_arena_potion_top(window, game);
    display_arena_potion_down(window, game);
    display_arena_potion_left(window, game);
    display_arena_potion_right(window, game);
    return EPITECH_SUCCESS;
}
