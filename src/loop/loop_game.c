/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** my_rpg
*/

#include "rpg.h"

int my_rpg(void)
{
    rpg_t *game = init_game();
    sfRenderWindow *window = create_window();
    sfVector2i mouse_pos;

    if (!game || !window)
        return (EPITECH_ERROR);
    sfMusic_play(game->set_vol->theme);
    sfMusic_setVolume(game->set_vol->theme, game->set_vol->volume);
    while (sfRenderWindow_isOpen(window)) {
        mouse_pos = sfMouse_getPositionRenderWindow(window);
        loop_event(window, game, mouse_pos);
        manage_scene(window, game, mouse_pos);
        sfRenderWindow_display(window);
        sfRenderWindow_clear(window, (sfColor){0, 0, 0, 0});
    }
    return EPITECH_SUCCESS;
}
