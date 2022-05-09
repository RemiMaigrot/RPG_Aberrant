/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** init_ennemy
*/

#include "rpg.h"

static sfIntRect default_mob_speed(void)
{
    sfIntRect rect;

    rect.top = 0;
    rect.left = 0;
    rect.width = 30;
    rect.height = 30;
    return (rect);
}

mob_t *init_knight(rpg_t *game, int pos_x, int pos_y)
{
    mob_t *mob = malloc(sizeof(mob_t));

    if (!mob)
        return NULL;
    sfSprite_setTexture(game->object[LINE_MOB_KNIGHT]->sprite,
    game->object[LINE_MOB_KNIGHT]->texture, sfTrue);
    game->object[LINE_MOB_KNIGHT]->position.x = pos_x;
    game->object[LINE_MOB_KNIGHT]->position.y = pos_y;
    mob->rect = default_mob_speed();
    mob->clock = sfClock_create();
    mob->time = sfClock_getElapsedTime(mob->clock);
    mob->seconds = 0.0;
    init_life_mob_knight(mob, pos_x, pos_y);
    mob->is_alive = true;
    sfSprite_setOrigin(game->object[LINE_MOB_KNIGHT]->sprite,
    (sfVector2f){30, 30});
    return (mob);
}

mob_t *init_alien(rpg_t *game, int pos_x, int pos_y)
{
    mob_t *mob = malloc(sizeof(mob_t));

    if (!mob)
        return NULL;
    game->object[LINE_MOB_ALIEN]->position.x = pos_x;
    game->object[LINE_MOB_ALIEN]->position.y = pos_y;
    mob->rect = default_mob_speed();
    mob->clock = sfClock_create();
    mob->time = sfClock_getElapsedTime(mob->clock);
    mob->seconds = 0.0;
    init_life_mob_alien(mob, pos_x, pos_y);
    mob->is_alive = true;
    sfSprite_setOrigin(game->object[LINE_MOB_ALIEN]->sprite,
    (sfVector2f){30, 30});
    return (mob);
}
