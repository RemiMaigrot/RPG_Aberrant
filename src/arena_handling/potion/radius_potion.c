/*
** EPITECH PROJECT, 2022
** Visual Studio Live Share (Workspace)
** File description:
** radius_potion
*/

#include "rpg.h"

bool player_in_potion_top_radius(rpg_t *game, sfCircleShape *circle)
{
    sfFloatRect rect1 = sfCircleShape_getGlobalBounds(circle);
    sfFloatRect rect2 =
    sfSprite_getGlobalBounds(game->object[LINE_PLAYER_RED]->sprite);

    if (!game || !circle)
        return false;
    if (sfFloatRect_intersects(&rect1, &rect2, NULL))
        return (true);
    return (false);
}

bool player_in_potion_down_radius(rpg_t *game, sfCircleShape *circle)
{
    sfFloatRect rect1 = sfCircleShape_getGlobalBounds(circle);
    sfFloatRect rect2 =
    sfSprite_getGlobalBounds(game->object[LINE_PLAYER_RED]->sprite);

    if (!game || !circle)
        return false;
    if (sfFloatRect_intersects(&rect1, &rect2, NULL))
        return (true);
    return (false);
}

bool player_in_potion_left_radius(rpg_t *game, sfCircleShape *circle)
{
    sfFloatRect rect1 = sfCircleShape_getGlobalBounds(circle);
    sfFloatRect rect2 =
    sfSprite_getGlobalBounds(game->object[LINE_PLAYER_RED]->sprite);

    if (!game || !circle)
        return false;
    if (sfFloatRect_intersects(&rect1, &rect2, NULL))
        return (true);
    return (false);
}

bool player_in_potion_right_radius(rpg_t *game, sfCircleShape *circle)
{
    sfFloatRect rect1 = sfCircleShape_getGlobalBounds(circle);
    sfFloatRect rect2 =
    sfSprite_getGlobalBounds(game->object[LINE_PLAYER_RED]->sprite);

    if (!game || !circle)
        return false;
    if (sfFloatRect_intersects(&rect1, &rect2, NULL))
        return (true);
    return (false);
}
