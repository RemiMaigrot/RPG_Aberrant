/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** init_mob_life
*/

#include "rpg.h"

int init_life_mob_alien(mob_t *mob, int pos_x, int pos_y)
{
    if (!mob)
        return EPITECH_ERROR;
    mob->life = 50;
    mob->circle = sfCircleShape_create();
    sfCircleShape_setPosition(mob->circle,
    (sfVector2f){pos_x - 80, pos_y - 80});
    sfCircleShape_setRadius(mob->circle, 100.0);
    sfCircleShape_setFillColor(mob->circle, sfColor_fromRGBA\
    (0, 171, 217, 150));
    mob->text =  sfText_create();
    mob->font = sfFont_createFromFile(FONT);
    convert_int_to_str(mob->str_life, mob->life);
    sfText_setString(mob->text, mob->str_life);
    sfText_setPosition(mob->text, (sfVector2f){pos_x, pos_y});
    sfText_setFont(mob->text, mob->font);
    sfText_setScale(mob->text, (sfVector2f){0.2, 0.2});
    return EPITECH_SUCCESS;
}

int init_life_mob_knight(mob_t *mob, int pos_x, int pos_y)
{
    if (!mob)
        return EPITECH_ERROR;
    mob->life = 50;
    mob->circle = sfCircleShape_create();
    sfCircleShape_setPosition(mob->circle,
    (sfVector2f){pos_x - 80, pos_y - 80});
    sfCircleShape_setRadius(mob->circle, 100.0);
    sfCircleShape_setFillColor(mob->circle, sfColor_fromRGBA\
    (0, 171, 0, 150));
    mob->text = sfText_create();
    mob->font = sfFont_createFromFile(FONT);
    convert_int_to_str(mob->str_life, mob->life);
    sfText_setString(mob->text, mob->str_life);
    sfText_setPosition(mob->text, (sfVector2f){pos_x, pos_y});
    sfText_setFont(mob->text, mob->font);
    sfText_setScale(mob->text, (sfVector2f){0.2, 0.2});
    return (EPITECH_SUCCESS);
}

int init_life_mob_bat(mob_t *mob, int pos_x, int pos_y)
{
    if (!mob)
        return EPITECH_ERROR;
    mob->life = 50;
    mob->circle = sfCircleShape_create();
    sfCircleShape_setPosition(mob->circle,
    (sfVector2f){pos_x - 35, pos_y - 35});
    sfCircleShape_setRadius(mob->circle, 100.0);
    sfCircleShape_setFillColor(mob->circle, sfColor_fromRGBA\
    (0, 171, 217, 150));
    mob->text = sfText_create();
    mob->font = sfFont_createFromFile(FONT);
    convert_int_to_str(mob->str_life, mob->life);
    sfText_setString(mob->text, mob->str_life);
    sfText_setPosition(mob->text, (sfVector2f){pos_x, pos_y});
    sfText_setFont(mob->text, mob->font);
    sfText_setScale(mob->text, (sfVector2f){0.2, 0.2});
    return EPITECH_SUCCESS;
}
