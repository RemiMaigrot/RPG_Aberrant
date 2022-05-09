/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** move_rect_effect
*/

#include "rpg.h"

int light_movement(rpg_t *game, int offset, int max_value, effect_t *effect)
{
    if (!game)
        return EPITECH_ERROR;
    effect->rect.top = 23;
    if (effect->rect.left > max_value - offset)
        effect->rect.left = 30;
    else
        effect->rect.left += offset;
    return EPITECH_SUCCESS;
}
