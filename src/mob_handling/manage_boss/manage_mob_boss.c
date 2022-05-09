/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** boss_state
*/

#include "rpg.h"

static bool boss_attack(rpg_t *game, sfCircleShape *circle)
{
    sfFloatRect rect1 = sfCircleShape_getGlobalBounds(circle);
    sfFloatRect rect2 =
        sfSprite_getGlobalBounds(game->object[LINE_MOB_BOSS]->sprite);

    if (!game)
        return EPITECH_ERROR;
    if (sfFloatRect_intersects(&rect1, &rect2, NULL)) {
        return (true);
    }
    return (false);
}

static bool damage_sword_on_boss(rpg_t *game)
{
    sfFloatRect rect1 =
    sfSprite_getGlobalBounds(game->object[LINE_PLAYER_RED]->sprite);
    sfFloatRect rect2 =
    sfSprite_getGlobalBounds(game->object[LINE_MOB_BOSS]->sprite);

    if (!game)
        return false;
    if (sfFloatRect_intersects(&rect1, &rect2, NULL))
        return true;
    return false;
}

static int manage_animation_boss(sfRenderWindow *window, rpg_t *game)
{
    if (!window || !game)
        return EPITECH_ERROR;
    if (game->mob->boss->seconds > 0.22) {
        sfSprite_setTextureRect(game->object[LINE_MOB_BOSS]->sprite,
        game->mob->boss->rect);
        sfClock_restart(game->mob->boss->clock);
    }
    if (game->mob->boss->direction == 'l') {
        if (boss_attack(game, game->mob->boss->circle_atk))
            move_rect_boss_attack_left(game, 0, 1125, 97);
        else
            move_rect_boss_left(game, 0, 1125, 0);
    }
    if (game->mob->boss->direction == 'r') {
        if (boss_attack(game, game->mob->boss->circle_atk))
            move_rect_boss_attack_right(game, 0, 1125, 833);
        else
            move_rect_boss_right(game, 0, 1125, 717);
    }
    return (EPITECH_SUCCESS);
}

int manage_boss(sfRenderWindow *window, rpg_t *game)
{
    manage_boss_speed(game);
    manage_animation_boss(window, game);
    sfRenderWindow_drawSprite(window, game->object[LINE_MOB_BOSS]->sprite,
    NULL);
    sfSprite_setPosition(game->object[LINE_MOB_BOSS]->sprite,
    game->object[LINE_MOB_BOSS]->position);
    sfCircleShape_setPosition(game->mob->boss->circle_move,
    (sfVector2f){game->object[LINE_MOB_BOSS]->position.x - 80,
    game->object[LINE_MOB_BOSS]->position.y - 50});
    show_life_boss(window, game);
    boss_movement(window, game);
    sfCircleShape_setPosition(game->mob->boss->circle_atk,
    (sfVector2f){game->object[LINE_PLAYER_RED]->position.x - 30,
    game->object[LINE_PLAYER_RED]->position.y - 40});
    if (damage_sword_on_boss(game))
        game->mob->boss->life -= 0.0001;
    return (EPITECH_SUCCESS);
}
