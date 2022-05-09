/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** mob_alien_range
*/

#include "rpg.h"

bool radius_around_alien(rpg_t *game, sfCircleShape *circle)
{
    sfFloatRect rect1 = sfCircleShape_getGlobalBounds(circle);
    sfFloatRect rect2 =
        sfSprite_getGlobalBounds(game->object[LINE_MOB_ALIEN]->sprite);

    if (sfFloatRect_intersects(&rect1, &rect2, NULL))
        return (true);
    return (false);
}
