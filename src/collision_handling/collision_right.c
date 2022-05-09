/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** collision_right
*/

#include "rpg.h"

bool collision_pixel_right(rpg_t *game, int limit_x, int y,
sfFloatRect rect_right)
{
    sfColor color = {0, 0, 0, 0};

    if (!game)
        return 84;
    for (int x = rect_right.left; x < limit_x; x++) {
        color = sfImage_getPixel(game->maps->map_colorless->image, x, y);
        if (color.r == 0 && color.g == 0 && color.b == 0)
            return (false);
    }
    return (true);
}
