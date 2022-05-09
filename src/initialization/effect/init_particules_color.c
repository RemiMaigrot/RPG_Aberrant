/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** init_particules_color
*/

#include "rpg.h"

int init_particule_color_rain(sfRectangleShape *shape_rain,
element_particule_t *new)
{
    if (!new || !shape_rain)
        return EPITECH_ERROR;
    new->pos = (sfVector2f){rand() % 3840,
    (rand() % (1920 + 1 - 600)) + 600};
    sfRectangleShape_setFillColor(shape_rain, (sfColor){255, 46, 46, 180});
    sfRectangleShape_setSize(shape_rain, (sfVector2f){4, 4});
    sfRectangleShape_setPosition(shape_rain, new->pos);
    return (EPITECH_SUCCESS);
}

int init_particule_color_flies(sfRectangleShape *shape_rain,
element_particule_t *new)
{
    if (!new || !shape_rain)
        return EPITECH_ERROR;
    new->pos = (sfVector2f){(rand() % (296 + 1 - 257)) + 257, 470};
    sfRectangleShape_setFillColor(shape_rain, (sfColor){0, 0, 0, 180});
    sfRectangleShape_setSize(shape_rain, (sfVector2f){1.5, 1.5});
    sfRectangleShape_setPosition(shape_rain, new->pos);
    return (EPITECH_SUCCESS);
}
