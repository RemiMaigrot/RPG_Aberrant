/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** set_rect_button
*/

#include "rpg.h"

static int init_button_volume(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    sfSprite_setTextureRect(game->set_vol->left->sprite,
    (sfIntRect){1029, 832, 200, 200});
    sfSprite_setTextureRect(game->set_vol->right->sprite,
    (sfIntRect){1239, 832, 200, 200});
    return EPITECH_SUCCESS;
}

int init_button_choice(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    sfSprite_setTextureRect(game->btn->new_game_b->sprite,
    (sfIntRect){0, 624, 600, 200});
    sfSprite_setTextureRect(game->btn->load_b->sprite,
    (sfIntRect){1216, 0, 600, 200});
    sfSprite_setTextureRect(game->btn->controls_b->sprite,
    (sfIntRect){0, 416, 600, 200});
    sfSprite_setTextureRect(game->btn->settings_b->sprite,
    (sfIntRect){1869, 833, 200, 200});
    sfSprite_setTextureRect(game->btn->exit_b->sprite,
    (sfIntRect){1215, 625, 600, 200});
    sfSprite_setTextureRect(game->btn->how_to_play_b->sprite,
    (sfIntRect){2035, 416, 200, 200});
    sfSprite_setTextureRect(game->btn->back_b->sprite,
    (sfIntRect){0, 832, 600, 200});
    init_button_volume(game);
    return EPITECH_SUCCESS;
}
