/*
** EPITECH PROJECT, 2022
** Visual Studio Live Share (Workspace)
** File description:
** manage_potion
*/

#include "rpg.h"

int retrieve_potion_arena_top(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    if (player_in_potion_top_radius(game, game->potion->range_heal_top)
        && game->potion->heal_top == false)
        game->potion->heal_top = true;
    return (EPITECH_SUCCESS);
}

int retrieve_potion_arena_down(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    if (player_in_potion_down_radius(game, game->potion->range_heal_down)
        && game->potion->heal_down == false)
        game->potion->heal_down = true;
    return (EPITECH_SUCCESS);
}

int retrieve_potion_arena_left(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    if (player_in_potion_left_radius(game, game->potion->range_heal_left)
        && game->potion->heal_left == false)
        game->potion->heal_left = true;
    return (EPITECH_SUCCESS);
}

int retrieve_potion_arena_right(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    if (player_in_potion_right_radius(game, game->potion->range_heal_right)
        && game->potion->heal_right == false)
        game->potion->heal_right = true;
    return (EPITECH_SUCCESS);
}
