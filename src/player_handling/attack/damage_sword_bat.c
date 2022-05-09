/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** damages_of_sword
*/

#include "rpg.h"

bool collision_sword_boss(rpg_t *game)
{
    sfFloatRect rect1 =
    sfSprite_getGlobalBounds(game->object[LINE_PLAYER_RED]->sprite);
    sfFloatRect rect2 =
    sfSprite_getGlobalBounds(game->object[LINE_MOB_BOSS]->sprite);

    if (!game)
        return false;
    if (sfFloatRect_intersects(&rect1, &rect2, NULL))
        return (true);
    return (false);
}

bool collision_sword_bat(rpg_t *game)
{
    sfFloatRect rect1 =
    sfSprite_getGlobalBounds(game->object[LINE_PLAYER_RED]->sprite);
    sfFloatRect rect2 =
    sfSprite_getGlobalBounds(game->object[LINE_MOB_BAT]->sprite);

    if (!game)
        return false;
    if (sfFloatRect_intersects(&rect1, &rect2, NULL))
        return (true);
    return (false);
}
