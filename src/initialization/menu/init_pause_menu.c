/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** init_pause_menu
*/

#include "rpg.h"

pause_menu_t *init_pause_menu(void)
{
    pause_menu_t *pause_menu = malloc(sizeof(pause_menu_t));
    char **tab = init_button_rsc2(BUTTON_SOUND_PATH, BUTTON_PATH);

    if (init_button(&(pause_menu->resume_b), (sfVector2f){350, 300},
    MEDIUM, tab) == EPITECH_ERROR)
        return NULL;
    if (init_button(&(pause_menu->menu_b), (sfVector2f){1150, 300},
    MEDIUM, tab) == EPITECH_ERROR)
        return NULL;
    if (init_button(&(pause_menu->exit_b), (sfVector2f){750, 700},
    MEDIUM, tab) == EPITECH_ERROR)
        return NULL;
    sfSprite_setTextureRect(pause_menu->resume_b->sprite,
    (sfIntRect){0, 207, 600, 200});
    sfSprite_setTextureRect(pause_menu->menu_b->sprite,
    (sfIntRect){1216, 209, 600, 200});
    sfSprite_setTextureRect(pause_menu->exit_b->sprite,
    (sfIntRect){1216, 624, 604, 200});
    return (pause_menu);
}
