/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** init_rect_mob_oldman
*/

#include "rpg.h"

sfIntRect init_rect_mob_oldman(int t, int l, int w, int h)
{
    sfIntRect rect;

    rect.top = t;
    rect.left = l;
    rect.width = w;
    rect.height = h;
    return (rect);
}
