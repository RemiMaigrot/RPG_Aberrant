/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** hover_button
*/

#include "rpg.h"

int mouse_on_button(button_t *button)
{
    if (!button)
        return EPITECH_ERROR;
    if (button->bsize == SMALL)
        sfSprite_setScale(button->sprite, (sfVector2f){0.4, 0.4});
    if (button->bsize == MEDIUM)
        sfSprite_setScale(button->sprite, (sfVector2f){0.65, 0.65});
    return (EPITECH_SUCCESS);
}

int mouse_not_on_button(button_t *button)
{
    if (!button)
        return EPITECH_ERROR;
    if (button->bsize == SMALL)
        sfSprite_setScale(button->sprite, (sfVector2f){0.35, 0.35});
    if (button->bsize == MEDIUM)
        sfSprite_setScale(button->sprite, (sfVector2f){0.6, 0.6});
    return (EPITECH_SUCCESS);
}

int mouse_hover_button(button_t *button, sfVector2i mouse_pos)
{
    sfFloatRect rect = sfRectangleShape_getGlobalBounds(button->shape);
    sfVector2f tmp = {(button->sprite_pos.x - 5),
    (button->sprite_pos.y - 5)};

    if (!button)
        return EPITECH_ERROR;
    if (sfFloatRect_contains(&rect, mouse_pos.x, mouse_pos.y)) {
        sfSprite_setPosition(button->sprite, tmp);
        mouse_on_button(button);
    } else {
        sfSprite_setPosition(button->sprite, button->sprite_pos);
        mouse_not_on_button(button);
    }
    return EPITECH_SUCCESS;
}

int manage_hover_button(rpg_t *game, sfVector2i mouse_pos)
{
    if (!game)
        return EPITECH_ERROR;
    mouse_hover_button(game->btn->new_game_b, mouse_pos);
    mouse_hover_button(game->btn->load_b, mouse_pos);
    mouse_hover_button(game->btn->controls_b, mouse_pos);
    mouse_hover_button(game->btn->settings_b, mouse_pos);
    mouse_hover_button(game->btn->exit_b, mouse_pos);
    mouse_hover_button(game->btn->how_to_play_b, mouse_pos);
    return (EPITECH_SUCCESS);
}
