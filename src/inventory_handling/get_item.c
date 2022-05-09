/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** get_item
*/

#include "rpg.h"

static bool player_in_potion_radius(rpg_t *game, sfCircleShape *circle)
{
    sfFloatRect rect1 = sfCircleShape_getGlobalBounds(circle);
    sfFloatRect rect2 =
        sfSprite_getGlobalBounds(game->object[LINE_PLAYER_RED]->sprite);

    if (!game || !circle)
        return EPITECH_ERROR;
    if (sfFloatRect_intersects(&rect1, &rect2, NULL))
        return (true);
    return (false);
}

static bool player_in_sword_radius(rpg_t *game, sfCircleShape *circle)
{
    sfFloatRect rect1 = sfCircleShape_getGlobalBounds(circle);
    sfFloatRect rect2 =
        sfSprite_getGlobalBounds(game->object[LINE_PLAYER_RED]->sprite);

    if (!game || !circle)
        return EPITECH_ERROR;
    if (sfFloatRect_intersects(&rect1, &rect2, NULL))
        return (true);
    return (false);
}

static bool player_in_key_radius(rpg_t *game, sfCircleShape *circle)
{
    sfFloatRect rect1 = sfCircleShape_getGlobalBounds(circle);
    sfFloatRect rect2 =
        sfSprite_getGlobalBounds(game->object[LINE_PLAYER_RED]->sprite);

    if (!game || !circle)
        return EPITECH_ERROR;
    if (sfFloatRect_intersects(&rect1, &rect2, NULL))
        return (true);
    return (false);
}

int retrieve_item(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    if (player_in_sword_radius(game, game->inventory->item->range_sword)
        && game->inventory->item->sword == false)
        game->inventory->item->sword = true;
    if (player_in_potion_radius(game, game->inventory->item->range_potion)
        && game->inventory->item->potion == false)
        game->inventory->item->potion = true;
    if (player_in_key_radius(game, game->inventory->item->range_key)
        && game->inventory->item->key == false
        && game->mob->mob_bat->life <= 0) {
        game->inventory->item->key = true;
        game->inventory->item->has_key = true;
    }
    retrieve_potion_arena_top(game);
    retrieve_potion_arena_down(game);
    retrieve_potion_arena_left(game);
    retrieve_potion_arena_right(game);
    return (EPITECH_SUCCESS);
}
