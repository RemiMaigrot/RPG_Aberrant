/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** effect_ctrl
*/

#include "rpg.h"

int effect_btn_ctrl(rpg_t *game)
{
    if (game->btn->wait == true &&
    my_strcmp(game->btn->button_clicked, "controls") == 0) {
        sfSprite_setTextureRect(game->btn->controls_b->sprite,
        (sfIntRect){2279, 416, 600, 200});
        if (game->btn->seconds < 0.2) {
            game->btn->time =
            sfClock_getElapsedTime(game->mob->mob_alien->clock);
            game->btn->seconds =
            game->btn->time.microseconds / 1000000.0;
            sfClock_restart(game->btn->clock);
        } else {
            sfSprite_setTextureRect(game->btn->controls_b->sprite,
            (sfIntRect){0, 416, 600, 200});
            game->change_menu = CONTROLS;
            game->btn->wait = false;
            game->btn->seconds = 0.0;
            game->btn->button_clicked = NULL;
        }
    }
    return (EPITECH_SUCCESS);
}
