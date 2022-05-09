/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** track_bat
*/

#include "rpg.h"

static bool detect_bat_arena(rpg_t *game, sfCircleShape *circle)
{
    sfFloatRect rect1 = sfCircleShape_getGlobalBounds(circle);
    sfFloatRect rect2 =
    sfSprite_getGlobalBounds(game->object[LINE_MOB_BAT]->sprite);

    if (!circle)
        return EPITECH_ERROR;
    if (sfFloatRect_intersects(&rect1, &rect2, NULL))
        return (true);
    return (false);
}

int track_bat(rpg_t *game, mob_t *bat)
{
    if (detect_bat_arena(game, bat->circle)) {
        if (game->object[LINE_MOB_BAT]->position.y >=
        game->object[LINE_PLAYER_RED]->position.y) {
            game->object[LINE_MOB_BAT]->position.y -= 1.5;
        }
        if (game->object[LINE_MOB_BAT]->position.y <=
        game->object[LINE_PLAYER_RED]->position.y) {
            game->object[LINE_MOB_BAT]->position.y += 1.5;
        }
        if (game->object[LINE_MOB_BAT]->position.x >=
        game->object[LINE_PLAYER_RED]->position.x) {
            game->object[LINE_MOB_BAT]->position.x -= 1.5;
        }
        if (game->object[LINE_MOB_BAT]->position.x <=
        game->object[LINE_PLAYER_RED]->position.x) {
            game->object[LINE_MOB_BAT]->position.x += 1.5;
        }
    }
    return (EPITECH_SUCCESS);
}

bool detect_bat(rpg_t *game, mob_t *bat, player_t *player)
{
    sfFloatRect rect1 = sfCircleShape_getGlobalBounds(bat->circle);
    sfFloatRect rect2 =
        sfSprite_getGlobalBounds(game->object[LINE_PLAYER_RED]->sprite);

    if (!game || !bat || !player)
        return EPITECH_ERROR;
    if (sfFloatRect_intersects(&rect1, &rect2, NULL))
        return (true);
    return (false);
}
