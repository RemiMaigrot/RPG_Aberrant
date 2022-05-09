/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** init_skin
*/

#include "rpg.h"

static int player_choice_default_shape(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    sfRectangleShape_setPosition(game->object[LINE_PLAYER_BLUE_RECT]->shape,
    game->object[LINE_PLAYER_BLUE_RECT]->position);
    sfRectangleShape_setFillColor(game->object[LINE_PLAYER_BLUE_RECT]->shape,
    sfColor_fromRGBA(0, 0, 255, 150));
    sfRectangleShape_setPosition(game->object[LINE_PLAYER_BROWN_RECT]->shape,
    game->object[LINE_PLAYER_BROWN_RECT]->position);
    sfRectangleShape_setFillColor(game->object[LINE_PLAYER_BROWN_RECT]->shape,
    sfColor_fromRGBA(0, 0, 255, 150));
    sfRectangleShape_setPosition(game->object[LINE_PLAYER_BLACK_RECT]->shape,
    game->object[LINE_PLAYER_BLACK_RECT]->position);
    sfRectangleShape_setFillColor(game->object[LINE_PLAYER_BLACK_RECT]->shape,
    sfColor_fromRGBA(0, 0, 255, 150));
    return (EPITECH_SUCCESS);
}

static int player_choice_default_scale(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    sfSprite_setScale(game->object[LINE_PLAYER_BLUE_RECT]->sprite,
    (sfVector2f){3, 3});
    sfSprite_setScale(game->object[LINE_PLAYER_BROWN_RECT]->sprite,
    (sfVector2f){3, 3});
    sfSprite_setScale(game->object[LINE_PLAYER_BLACK_RECT]->sprite,
    (sfVector2f){3, 3});
    sfSprite_setScale(game->object[LINE_CHOICE_SHADOW]->sprite,
    (sfVector2f){3, 3});
    sfRectangleShape_setSize(game->object[LINE_PLAYER_BLUE_RECT]->shape,
    (sfVector2f){80, 100});
    sfRectangleShape_setSize(game->object[LINE_PLAYER_BROWN_RECT]->shape,
    (sfVector2f){80, 100});
    sfRectangleShape_setSize(game->object[LINE_PLAYER_BLACK_RECT]->shape,
    (sfVector2f){80, 100});
    return (EPITECH_SUCCESS);
}

static int player_choice_default_position(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    game->object[LINE_PLAYER_BLUE_RECT]->position.x = 700;
    game->object[LINE_PLAYER_BLUE_RECT]->position.y = 450;
    game->object[LINE_PLAYER_BROWN_RECT]->position.x = 900;
    game->object[LINE_PLAYER_BROWN_RECT]->position.y = 450;
    game->object[LINE_PLAYER_BLACK_RECT]->position.x = 1100;
    game->object[LINE_PLAYER_BLACK_RECT]->position.y = 450;
    sfSprite_setPosition(game->object[LINE_PLAYER_BLUE_RECT]->sprite,
    game->object[LINE_PLAYER_BLUE_RECT]->position);
    sfSprite_setPosition(game->object[LINE_PLAYER_BROWN_RECT]->sprite,
    game->object[LINE_PLAYER_BROWN_RECT]->position);
    sfSprite_setPosition(game->object[LINE_PLAYER_BLACK_RECT]->sprite,
    game->object[LINE_PLAYER_BLACK_RECT]->position);
    return EPITECH_SUCCESS;
}

int manage_player_choice_menu(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    if (player_choice_default_position(game) == EPITECH_ERROR
    || player_choice_default_scale(game) == EPITECH_ERROR
    || player_choice_default_shape(game) == EPITECH_ERROR)
        return EPITECH_ERROR;
    return (EPITECH_SUCCESS);
}
