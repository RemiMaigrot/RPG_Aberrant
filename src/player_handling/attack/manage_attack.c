/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** manage_attack
*/

#include "rpg.h"

static int manage_clock_attack(rpg_t *game)
{
    if (!game)
        return 84;
    game->attack->sword->time =
    sfClock_getElapsedTime(game->attack->sword->clock);
    game->attack->sword->seconds =
    game->attack->sword->time.microseconds / 1000000.0;
    return (EPITECH_SUCCESS);
}

static int attack_right(sfRenderWindow *window, rpg_t *game)
{
    if (!window || !game)
        return EPITECH_ERROR;
    manage_clock_attack(game);
    if (game->attack->sword->seconds > 0.09) {
        sfSprite_setTextureRect(game->attack->sword->sprite_right,
        game->attack->sword->rect);
        move_rect_attack(game, 130, 610);
        sfClock_restart(game->attack->sword->clock);
    }
    sfSprite_setPosition(game->attack->sword->sprite_right, (sfVector2f)
    {game->object[LINE_PLAYER_RED]->position.x,
    game->object[LINE_PLAYER_RED]->position.y - 30});
    sfRenderWindow_drawSprite(window, game->attack->sword->sprite_right,
    NULL);
    return (EPITECH_SUCCESS);
}

static int attack_left(sfRenderWindow *window, rpg_t *game)
{
    if (!window || !game)
        return EPITECH_ERROR;
    manage_clock_attack(game);
    if (game->attack->sword->seconds > 0.09) {
        sfSprite_setTextureRect(game->attack->sword->sprite_left,
        game->attack->sword->rect);
        move_rect_attack(game, 130, 610);
        sfClock_restart(game->attack->sword->clock);
    }
    sfSprite_setPosition(game->attack->sword->sprite_left, (sfVector2f)
    {game->object[LINE_PLAYER_RED]->position.x - 30,
    game->object[LINE_PLAYER_RED]->position.y - 30});
    sfRenderWindow_drawSprite(window, game->attack->sword->sprite_left,
    NULL);
    return (EPITECH_SUCCESS);
}

int manage_attack_player(sfRenderWindow *window, rpg_t *game)
{
    if (!window || !game)
        return EPITECH_ERROR;
    if (game->inventory->item->sword == true) {
        if (game->player->attack_left == true)
            attack_left(window, game);
        if (game->player->attack_right == true)
            attack_right(window, game);
    }
    return (EPITECH_SUCCESS);
}
