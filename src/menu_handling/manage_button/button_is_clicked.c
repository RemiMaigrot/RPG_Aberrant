/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** clique_button
*/

#include "rpg.h"

bool button_is_clicked(button_t *button, sfVector2i mouse_pos)
{
    sfFloatRect rect = sfRectangleShape_getGlobalBounds(button->shape);

    if (!button)
        return false;
    if (sfFloatRect_contains(&rect, mouse_pos.x, mouse_pos.y))
        return true;
    return false;
}
