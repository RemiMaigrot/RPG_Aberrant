/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** manage_bat
*/

#include "rpg.h"

int manage_mob_bat(sfRenderWindow *window, rpg_t *game)
{
    if (!game || !window)
        return EPITECH_ERROR;
    mob_bat_speed(game);
    mob_bat_attack(game, game->mob->mob_bat);
    if (game->mob->mob_bat->seconds > 0.16) {
        sfSprite_setTextureRect(game->object[LINE_MOB_BAT]->sprite,
        game->mob->mob_bat->rect);
        sfClock_restart(game->mob->mob_bat->clock);
    }
    mob_bat_movement(game, 95, 735, 31);
    sfRenderWindow_drawSprite(window, game->object[LINE_MOB_BAT]->sprite,
    NULL);
    sfSprite_setPosition(game->object[LINE_MOB_BAT]->sprite,
    game->object[LINE_MOB_BAT]->position);
    mob_bat_life(window, game);
    return (EPITECH_SUCCESS);
}
