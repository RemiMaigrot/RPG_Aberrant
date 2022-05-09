/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** effect_load
*/

#include "rpg.h"

int effect_btn_load(rpg_t *game)
{
    if (game->btn->wait == true &&
    my_strcmp(game->btn->button_clicked, "load") == 0) {
        sfSprite_setTextureRect(game->btn->load_b->sprite,
        (sfIntRect){3495, 0, 600, 200});
        if (game->btn->seconds < 0.2) {
            game->btn->time =
            sfClock_getElapsedTime(game->mob->mob_alien->clock);
            game->btn->seconds =
            game->btn->time.microseconds / 1000000.0;
            sfClock_restart(game->btn->clock);
        } else {
            sfSprite_setTextureRect(game->btn->load_b->sprite,
            (sfIntRect){1216, 0, 600, 200});
            game->change_menu = SAVE;
            game->btn->wait = false;
            game->btn->seconds = 0.0;
            game->btn->button_clicked = NULL;
        }
    }
    return (EPITECH_SUCCESS);
}
