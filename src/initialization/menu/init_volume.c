/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** init_volume
*/

#include "rpg.h"

settings_volume_t *init_volume(void)
{
    char **tab = init_button_rsc2(BUTTON_SOUND_PATH, BUTTON_PATH);
    settings_volume_t *volume = malloc(sizeof(settings_volume_t));

    volume->pos = (sfVector2f){590 , 300};
    volume->volume = 10;
    volume->size = (sfVector2f){(700 / volume->volume), 30};
    volume->rect_volume = sfRectangleShape_create();
    sfRectangleShape_setFillColor(volume->rect_volume, sfRed);
    sfRectangleShape_setSize(volume->rect_volume, volume->size);
    sfRectangleShape_setPosition(volume->rect_volume, volume->pos);
    init_button(&(volume->left), (sfVector2f){785, 350},
    SMALL, tab);
    init_button(&(volume->right), (sfVector2f){1040, 350},
    SMALL, tab);
    volume->theme = sfMusic_createFromFile(PATH_VOLUME);
    volume->game_music = sfMusic_createFromFile(PATH_MUSIC_GAME);
    sfMusic_setLoop(volume->theme, true);
    sfMusic_setLoop(volume->game_music, true);
    return volume;
}
