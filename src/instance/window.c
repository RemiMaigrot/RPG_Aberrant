/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** window
*/

#include "rpg.h"

sfRenderWindow *create_window(void)
{
    window_t *window = malloc(sizeof(window_t));

    if (!window)
        return (NULL);
    window->mode.width = 1920;
    window->mode.height = 1080;
    window->mode.bitsPerPixel = 32;
    window->name = my_strdup("RPG Aberrant");
    window->wdw = sfRenderWindow_create(window->mode, window->name,
    sfClose | sfResize, NULL);
    if (!window->wdw)
        return NULL;
    sfRenderWindow_setVerticalSyncEnabled(window->wdw, 1);
    sfRenderWindow_setFramerateLimit(window->wdw, 30);
    return (window->wdw);
}
