/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** init_player
*/

#include "rpg.h"

static sfIntRect init_rect_player(void)
{
    sfIntRect rect;

    rect.top = 0;
    rect.left = 0;
    rect.width = 30;
    rect.height = 32;
    return (rect);
}

player_t *init_player(rpg_t *game)
{
    player_t *player = malloc(sizeof(player_t));

    if (!player || !game)
        return NULL;
    sfSprite_setTexture(game->object[LINE_PLAYER_RED]->sprite,
    game->object[LINE_PLAYER_RED]->texture, sfTrue);
    game->object[LINE_PLAYER_RED]->position.x = 425;
    game->object[LINE_PLAYER_RED]->position.y = 1220;
    player->rect = init_rect_player();
    player->clock = sfClock_create();
    player->time = sfClock_getElapsedTime(player->clock);
    player->seconds = 0.0;
    sfSprite_setOrigin(game->object[LINE_PLAYER_RED]->sprite,
    (sfVector2f){15, 32});
    player->direction = "right";
    player->attack_left = false;
    player->attack_right = false;
    player->life = 100;
    return (player);
}
