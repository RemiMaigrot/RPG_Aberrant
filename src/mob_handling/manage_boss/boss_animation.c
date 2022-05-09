/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** boos_animation
*/

#include "rpg.h"

int move_rect_boss_right(rpg_t *game, int offset, int max_value, int pos_top)
{
    if (!game)
        return EPITECH_ERROR;
    game->mob->boss->rect.top = pos_top;
    if (game->mob->boss->rect.left > max_value - (2 * 140))
        game->mob->boss->rect.left = offset;
    else
        game->mob->boss->rect.left += 140;
    return EPITECH_SUCCESS;
}

int move_rect_boss_left(rpg_t *game, int offset, int max_value, int pos_top)
{
    if (!game)
        return EPITECH_ERROR;
    game->mob->boss->rect.top = pos_top;
    if (game->mob->boss->rect.left > max_value - (2 * 140))
        game->mob->boss->rect.left = offset;
    else
        game->mob->boss->rect.left += 140;
    return EPITECH_SUCCESS;
}

int move_rect_boss_attack_right(rpg_t *game, int offset, int max_value,
int pos_top)
{
    if (!game)
        return EPITECH_ERROR;
    game->mob->boss->rect.top = pos_top;
    if (game->mob->boss->rect.left > max_value - (2 * 140)) {
        game->mob->boss->rect.left = offset;
        game->player->life -= 0.001;
    } else {
        game->mob->boss->rect.left += 140;
    }
    return EPITECH_SUCCESS;
}

int move_rect_boss_attack_left(rpg_t *game, int offset, int max_value,
int pos_top)
{
    if (!game)
        return EPITECH_ERROR;
    game->mob->boss->rect.top = pos_top;
    if (game->mob->boss->rect.left > max_value - (2 * 140)) {
        game->mob->boss->rect.left = offset;
        game->player->life -= 0.001;
    } else {
        game->mob->boss->rect.left += 140;
    }
    return EPITECH_SUCCESS;
}

int show_life_boss(sfRenderWindow *window, rpg_t *game)
{
    convert_int_to_str(game->mob->boss->str_life,
    game->mob->boss->life);
    sfText_setString(game->mob->boss->text,
    game->mob->boss->str_life);
    sfText_setPosition(game->mob->boss->text, (sfVector2f)
    {game->object[LINE_MOB_BOSS]->position.x - 110,
    game->object[LINE_MOB_BOSS]->position.y - 80});
    sfRenderWindow_drawText(window, game->mob->boss->text, NULL);
    return (EPITECH_SUCCESS);
}
