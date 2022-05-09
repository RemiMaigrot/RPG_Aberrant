/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** collision_mob
*/

#include "rpg.h"

bool detect_ennemy(rpg_t *game, mob_t *mob)
{
    sfFloatRect rect1 = sfCircleShape_getGlobalBounds(mob->circle);
    sfFloatRect rect2 =
        sfSprite_getGlobalBounds(game->object[LINE_PLAYER_RED]->sprite);

    if (!game || !mob)
        return EPITECH_ERROR;
    if (sfFloatRect_intersects(&rect1, &rect2, NULL))
        return (true);
    return (false);
}
