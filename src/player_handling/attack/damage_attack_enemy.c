/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** damage_attack_enemy
*/

#include "rpg.h"

static bool damage_alien(rpg_t *game)
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

static bool damage_knight(rpg_t *game)
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

static bool damage_bat(rpg_t *game)
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

static int drop_key(sfRenderWindow *window, rpg_t *game)
{
    if (!game || !window)
        return EPITECH_ERROR;
    if (game->mob->mob_bat->life <= 0 &&
    game->inventory->item->has_key == false) {
        sfCircleShape_setPosition(game->inventory->item->range_key,
        game->object[LINE_MOB_BAT]->position);
        sfSprite_setPosition(game->object[LINE_ITEM_KEY]->sprite,
        game->object[LINE_MOB_BAT]->position);
        sfRenderWindow_drawSprite(window,
        game->object[LINE_ITEM_KEY]->sprite, NULL);
    }
    return (EPITECH_SUCCESS);
}

int manage_damage_enemy(sfRenderWindow *window, rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    if (game->mob->mob_alien->is_alive) {
        if (damage_alien(game) && game->mob->mob_alien->life >= 0)
            game->player->life -= 0.001;
    }
    if (game->mob->mob_knight->is_alive) {
        if (damage_knight(game) && game->mob->mob_knight->life >= 0)
            game->player->life -= 0.001;
    }
    if (game->mob->mob_bat->is_alive) {
        if (damage_bat(game) && game->mob->mob_bat->life >= 0)
            game->player->life -= 0.001;
    }
    if (game->player->life <= 0)
        game->change_menu = GAME_OVER;
    drop_key(window, game);
    return (EPITECH_SUCCESS);
}
