/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** effect_exit
*/

#include "rpg.h"

int effect_btn_exit(sfRenderWindow *window, rpg_t *game)
{
    if (game->btn->wait == true &&
    my_strcmp(game->btn->button_clicked, "exit") == 0) {
        sfSprite_setTextureRect(game->btn->exit_b->sprite,
        (sfIntRect){3494, 625, 600, 200});
        if (game->btn->seconds < 0.2) {
            game->btn->time =
            sfClock_getElapsedTime(game->mob->mob_alien->clock);
            game->btn->seconds =
            game->btn->time.microseconds / 1000000.0;
            sfClock_restart(game->btn->clock);
        } else {
            sfSprite_setTextureRect(game->btn->exit_b->sprite,
            (sfIntRect){1215, 625, 600, 200});
            sfRenderWindow_close(window);
            game->btn->wait = false;
            game->btn->seconds = 0.0;
            game->btn->button_clicked = NULL;
        }
    }
    return (EPITECH_SUCCESS);
}
