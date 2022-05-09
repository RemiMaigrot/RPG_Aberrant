/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** mob_movement
*/

#include "rpg.h"

int mob_movement(mob_t *mob, int offset, int max_value, int pos_top)
{
    if (!mob)
        return EPITECH_ERROR;
    mob->rect.top = pos_top;
    if (mob->rect.left > max_value - offset * 2)
        mob->rect.left = 0;
    else
        mob->rect.left += offset;
    return EPITECH_SUCCESS;
}
