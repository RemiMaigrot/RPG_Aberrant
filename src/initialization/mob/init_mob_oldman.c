/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** init_mob_oldman
*/

#include "rpg.h"

static bubble_interraction_t *init_dialogue_pnj(rpg_t *game, int pos_x,
int pos_y)
{
    bubble_interraction_t *bubble = malloc(sizeof(bubble_interraction_t));

    if (!game)
        return NULL;
    sfSprite_setPosition(game->object[LINE_DIALOGUE]->sprite,
    (sfVector2f){pos_x - 35, pos_y - 20});
    sfSprite_setScale(game->object[LINE_DIALOGUE]->sprite,
    (sfVector2f){0.25, 0.25});
    if (!bubble)
        return NULL;
    return (bubble);
}

static int init_circle_shape_png(pnj_t *pnj, int pos_x, int pos_y)
{
    if (!pnj)
        return EPITECH_ERROR;
    pnj->circle = sfCircleShape_create();
    sfCircleShape_setPosition(pnj->circle,
    (sfVector2f){pos_x - 35, pos_y - 35});
    sfCircleShape_setRadius(pnj->circle, 50.0);
    sfCircleShape_setFillColor(pnj->circle, sfColor_fromRGBA\
    (0, 171, 217, 150));
    return (EPITECH_SUCCESS);
}

static int init_text_dialogue(rpg_t *game, dialogue_box_t *dialogue_box,
int pos_x, int pos_y)
{
    if (!dialogue_box)
        return EPITECH_ERROR;
    dialogue_box->font = sfFont_createFromFile(FONT);
    dialogue_box->text = sfText_create();
    sfText_setString(dialogue_box->text, dialogue_box->text_dialogue[0]);
    sfText_setPosition(dialogue_box->text,
    (sfVector2f){pos_x + 10, pos_y + 5});
    sfText_setFont(dialogue_box->text, dialogue_box->font);
    sfSprite_setScale(game->object[LINE_DIALOGUEBOX]->sprite,
    (sfVector2f){0.3, 0.3});
    sfText_setScale(dialogue_box->text, (sfVector2f){0.3, 0.3});
    return (EPITECH_SUCCESS);
}

static dialogue_box_t *init_dialogue_box(rpg_t *game, int pos_x, int pos_y)
{
    dialogue_box_t *dialogue_box = malloc(sizeof(dialogue_box_t));

    if (!game || !dialogue_box)
        return NULL;
    dialogue_box->rect = init_rect_mob_oldman(482, 322, 317, 77);
    sfSprite_setTextureRect(game->object[LINE_DIALOGUEBOX]->sprite,
    dialogue_box->rect);
    dialogue_box->pos = (sfVector2f){pos_x, pos_y};
    sfSprite_setPosition(game->object[LINE_DIALOGUEBOX]->sprite,
    game->object[LINE_DIALOGUEBOX]->position);
    dialogue_box->active = false;
    dialogue_box->index = 1;
    dialogue_box->buffer = return_buffer_map(NPC_DIALOGUE_QUEST1);
    dialogue_box->text_dialogue = str_to_tab_path(dialogue_box->buffer, '\n');
    dialogue_box->can_dialogue = false;
    init_text_dialogue(game, dialogue_box, pos_x, pos_y);
    return (dialogue_box);
}

pnj_t *init_mob_oldman(rpg_t *game, int pos_x, int pos_y)
{
    pnj_t *pnj = malloc(sizeof(pnj_t));

    if (!pnj || !game)
        return NULL;
    game->object[LINE_MOB_OLDMAN]->position.x = pos_x;
    game->object[LINE_MOB_OLDMAN]->position.y = pos_y;
    pnj->rect = init_rect_mob_oldman(0, 0, 30, 32);
    pnj->clock = sfClock_create();
    pnj->time = sfClock_getElapsedTime(pnj->clock);
    pnj->seconds = 0.0;
    init_circle_shape_png(pnj, pos_x, pos_y);
    pnj->bubble = init_dialogue_pnj(game, pos_x, pos_y);
    pnj->dialogue_box = init_dialogue_box(game, pos_x + 20, pos_y - 20);
    if (!game->object[LINE_MOB_OLDMAN]->texture
    || !game->object[LINE_MOB_OLDMAN]->position.x
    || !game->object[LINE_MOB_OLDMAN]->position.y)
        return NULL;
    return (pnj);
}
