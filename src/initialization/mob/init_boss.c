/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** init_boss
*/

#include "rpg.h"

static sfIntRect init_boss_rect(void)
{
    sfIntRect rect;

    rect.top = 89;
    rect.left = 0;
    rect.width = 140;
    rect.height = 114;
    return (rect);
}

static int init_boss_life(boss_t *boss, int pos_x, int pos_y)
{
    if (!boss)
        return EPITECH_ERROR;
    boss->life = 1000;
    boss->text = sfText_create();
    boss->font = sfFont_createFromFile(FONT);
    convert_int_to_str(boss->str_life, boss->life);
    sfText_setString(boss->text, boss->str_life);
    sfText_setPosition(boss->text, (sfVector2f){pos_x, pos_y});
    sfText_setFont(boss->text, boss->font);
    sfText_setScale(boss->text, (sfVector2f){0.2, 0.2});
    return EPITECH_SUCCESS;
}

boss_t *init_boss(rpg_t *game, int pos_x, int pos_y)
{
    boss_t *boss = malloc(sizeof(boss_t));

    if (!boss)
        return NULL;
    boss->direction = 'l';
    game->object[LINE_MOB_BOSS]->position.x = pos_x;
    game->object[LINE_MOB_BOSS]->position.y = pos_y;
    game->object[LINE_MOB_BOSS]->position.x = pos_x;
    game->object[LINE_MOB_BOSS]->position.y = pos_y;
    boss->rect = init_boss_rect();
    boss->clock = sfClock_create();
    boss->time = sfClock_getElapsedTime(boss->clock);
    boss->seconds = 0.0;
    boss->life = 100;
    init_boss_life(boss, pos_x, pos_y);
    init_boss_tracking(game, boss);
    return (boss);
}
