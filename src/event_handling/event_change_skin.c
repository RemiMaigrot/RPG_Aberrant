/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** event_change_skin
*/

#include "rpg.h"

static bool choose_skin(rpg_t *game, sfVector2i mouse_pos, int type)
{
    sfFloatRect rect = sfRectangleShape_getGlobalBounds
    (game->object[type]->shape);

    if (!game)
        return false;
    if (sfFloatRect_contains(&rect, mouse_pos.x, mouse_pos.y))
        return true;
    return false;
}

static int manage_choose_skin_black(rpg_t *game, sfVector2i mouse_pos)
{
    if (!game)
        return (EPITECH_ERROR);
    if (choose_skin(game, mouse_pos, LINE_PLAYER_BLACK_RECT)) {
        game->object[LINE_CHOICE_SHADOW]->position.x = 1095;
        game->object[LINE_CHOICE_SHADOW]->position.y = 650;
        game->object[LINE_PLAYER_RED]->sprite =
        game->object[LINE_PLAYER_BLACK]->sprite;
    }
    return EPITECH_SUCCESS;
}

int manage_change_skin(rpg_t *game, sfVector2i mouse_pos)
{
    if (!game)
        return EPITECH_ERROR;
    if (choose_skin(game, mouse_pos, LINE_PLAYER_BLUE_RECT)) {
        game->object[LINE_CHOICE_SHADOW]->position.x = 695;
        game->object[LINE_CHOICE_SHADOW]->position.y = 650;
        game->object[LINE_PLAYER_RED]->sprite =
        game->object[LINE_PLAYER_BLUE]->sprite;
    }
    if (choose_skin(game, mouse_pos, LINE_PLAYER_BROWN_RECT)) {
        game->object[LINE_CHOICE_SHADOW]->position.x = 895;
        game->object[LINE_CHOICE_SHADOW]->position.y = 650;
        game->object[LINE_PLAYER_RED]->sprite =
        game->object[LINE_PLAYER_BROWN]->sprite;
    }
    manage_choose_skin_black(game, mouse_pos);
    return (EPITECH_SUCCESS);
}
