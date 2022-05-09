/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** collision_left
*/

#include "rpg.h"

bool collision_pixel_left(rpg_t *game, int limit_x, int y,
sfFloatRect rect_left)
{
    sfColor color = {0, 0, 0, 0};

    for (int x = rect_left.left; x < limit_x; x++) {
        color = sfImage_getPixel(game->maps->map_colorless->image, x, y);
        if (color.r == 0 && color.g == 0 && color.b == 0)
            return (false);
    }
    return (true);
}
