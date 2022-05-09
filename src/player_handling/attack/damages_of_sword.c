/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** damages_of_sword
*/

#include "rpg.h"

static bool collision_sword_alien(rpg_t *game)
{
    sfFloatRect rect1 =
    sfSprite_getGlobalBounds(game->object[LINE_PLAYER_RED]->sprite);
    sfFloatRect rect2 =
    sfSprite_getGlobalBounds(game->object[LINE_MOB_ALIEN]->sprite);

    if (!game)
        return false;
    if (sfFloatRect_intersects(&rect1, &rect2, NULL))
        return (true);
    return (false);
}

static bool collision_sword_knight(rpg_t *game)
{
    sfFloatRect rect1 =
    sfSprite_getGlobalBounds(game->object[LINE_PLAYER_RED]->sprite);
    sfFloatRect rect2 =
    sfSprite_getGlobalBounds(game->object[LINE_MOB_KNIGHT]->sprite);

    if (!game)
        return false;
    if (sfFloatRect_intersects(&rect1, &rect2, NULL))
        return (true);
    return (false);
}

int damage_of_sword_boss(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    if (collision_sword_boss(game) == true) {
        game->mob->boss->life -= 30;
        if (game->mob->boss->life <= 0)
            game->change_menu = WIN;
    }
    return (EPITECH_SUCCESS);
}

int damages_of_sword(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    if (collision_sword_knight(game) == true) {
        game->mob->mob_knight->life -= 5;
        if (game->mob->mob_knight->life <= 0)
            game->mob->mob_knight->is_alive = false;
    }
    if (collision_sword_alien(game) == true) {
        game->mob->mob_alien->life -= 5;
        if (game->mob->mob_alien->life <= 0)
            game->mob->mob_alien->is_alive = false;
    }
    if (collision_sword_bat(game) == true) {
        game->mob->mob_bat->life -= 5;
        if (game->mob->mob_bat->life <= 0)
            game->mob->mob_bat->is_alive = false;
    }
    damage_of_sword_boss(game);
    return (EPITECH_SUCCESS);
}
