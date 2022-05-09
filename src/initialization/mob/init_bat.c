/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** init_mob_bat
*/

#include "rpg.h"

static sfIntRect init_rect_bat(void)
{
    sfIntRect rect;

    rect.top = 31;
    rect.left = 25;
    rect.width = 40;
    rect.height = 25;
    return (rect);
}

mob_t *init_bat(rpg_t *game, int pos_x, int pos_y)
{
    mob_t *mob = malloc(sizeof(mob_t));

    if (!mob)
        return NULL;
    game->object[LINE_MOB_BAT]->position.x = pos_x;
    game->object[LINE_MOB_BAT]->position.y = pos_y;
    mob->rect = init_rect_bat();
    mob->clock = sfClock_create();
    mob->time = sfClock_getElapsedTime(mob->clock);
    mob->seconds = 0.0;
    init_life_mob_bat(mob, pos_x, pos_y);
    mob->is_alive = true;
    sfSprite_setOrigin(game->object[LINE_MOB_BAT]->sprite,
    (sfVector2f){20, 13});
    return (mob);
}
