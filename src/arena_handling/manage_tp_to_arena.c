/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** manage_tp
*/

#include "rpg.h"

int display_tp(sfRenderWindow *window, rpg_t *game)
{
    if (game->inventory->item->key_clicked == true) {
        sfRenderWindow_drawSprite(window,
        game->object[LINE_TP_TO_ARENA]->sprite, NULL);
    }
    return (EPITECH_SUCCESS);
}

static int manage_clock_tp(rpg_t *game)
{
    if (!game)
        return 84;
    game->tp_boss->time =
    sfClock_getElapsedTime(game->tp_boss->clock);
    game->tp_boss->seconds =
    game->tp_boss->time.microseconds / 1000000.0;
    return (EPITECH_SUCCESS);
}

static bool go_to_boss(rpg_t *game)
{
    sfFloatRect rect1 =
    sfSprite_getGlobalBounds(game->object[LINE_PLAYER_RED]->sprite);
    sfFloatRect rect2 =
    sfSprite_getGlobalBounds(game->object[LINE_TP_TO_ARENA]->sprite);

    if (!game)
        return false;
    if (sfFloatRect_intersects(&rect1, &rect2, NULL))
        return (true);
    return (false);
}

int manage_tp(rpg_t *game, sfRenderWindow *window)
{
    manage_clock_tp(game);
    if (game->tp_boss->seconds > 0.10) {
        sfSprite_setTextureRect(game->object[LINE_TP_TO_ARENA]->sprite,
        game->tp_boss->rect);
        move_rect_tp(game, 190, 948, 5);
        sfClock_restart(game->tp_boss->clock);
    }
    if (go_to_boss(game) && game->inventory->item->key_clicked) {
        game->object[LINE_PLAYER_RED]->position = (sfVector2f){2200, 50};
        game->tp_boss->has_tp = true;
    }
    display_tp(window, game);
    return (EPITECH_SUCCESS);
}
