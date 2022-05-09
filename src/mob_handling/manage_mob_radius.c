/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** detect_ennemy_arena
*/

#include "rpg.h"

bool radius_around_knight(rpg_t *game, sfCircleShape *circle)
{
    sfFloatRect rect1 = sfCircleShape_getGlobalBounds(circle);
    sfFloatRect rect2 =
    sfSprite_getGlobalBounds(game->object[LINE_MOB_KNIGHT]->sprite);

    if (sfFloatRect_intersects(&rect1, &rect2, NULL))
        return (true);
    return (false);
}

bool player_in_mob_radius(rpg_t *game, sfCircleShape *circle)
{
    sfFloatRect rect1 = sfCircleShape_getGlobalBounds(circle);
    sfFloatRect rect2 =
    sfSprite_getGlobalBounds(game->object[LINE_PLAYER_RED]->sprite);

    if (sfFloatRect_intersects(&rect1, &rect2, NULL))
        return (true);
    return (false);
}
