/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** all_settings
*/

#include "rpg.h"

int manage_vol_rect_left(rpg_t *game, sfVector2i mouse_pos)
{
    if (button_is_clicked(game->set_vol->left, mouse_pos) == true
    && game->set_vol->volume > 0) {
        sfMusic_setVolume(game->set_vol->theme,
        (game->set_vol->volume - 10));
        sfMusic_setVolume(game->set_vol->game_music,
        (game->set_vol->volume - 10));
        game->set_vol->size.x -= 70;
        sfRectangleShape_setSize(game->set_vol->rect_volume,
        game->set_vol->size);
        sfRectangleShape_setPosition(game->set_vol->rect_volume,
        game->set_vol->pos);
        game->set_vol->volume -= 10;
    }
    return EPITECH_SUCCESS;
}

int manage_vol_rect_right(rpg_t *game, sfVector2i mouse_pos)
{
    if (!game)
        return EPITECH_ERROR;
    if (button_is_clicked(game->set_vol->right, mouse_pos) == true
    && game->set_vol->volume < 100) {
        sfMusic_setVolume(game->set_vol->theme,
        (game->set_vol->volume + 10));
        sfMusic_setVolume(game->set_vol->game_music,
        (game->set_vol->volume + 10));
        game->set_vol->size.x += 70;
        sfRectangleShape_setSize(game->set_vol->rect_volume,
        game->set_vol->size);
        sfRectangleShape_setPosition(game->set_vol->rect_volume,
        game->set_vol->pos);
        game->set_vol->volume += 10;
    }
    return EPITECH_SUCCESS;
}
