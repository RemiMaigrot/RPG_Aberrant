/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** init_attack
*/

#include "rpg.h"

static sfIntRect init_rect_sword(void)
{
    sfIntRect rect;

    rect.top = 0;
    rect.left = 15;
    rect.width = 99;
    rect.height = 130;
    return (rect);
}

static attack_t *init_sword(void)
{
    attack_t *sword = malloc(sizeof(attack_t));

    if (!sword)
        return NULL;
    sword->seconds = 0.0;
    sword->clock = sfClock_create();
    sword->time = sfClock_getElapsedTime(sword->clock);
    sword->damages = 5;
    sword->rect = init_rect_sword();
    sword->texture_right = sfTexture_createFromFile(PATH_SWORD_RIGHT, NULL);
    sword->sprite_right = sfSprite_create();
    sfSprite_setTexture(sword->sprite_right, sword->texture_right, sfTrue);
    sfSprite_setTextureRect(sword->sprite_right, sword->rect);
    sfSprite_setScale(sword->sprite_right, (sfVector2f){0.4, 0.4});
    sword->texture_left = sfTexture_createFromFile(PATH_SWORD_LEFT, NULL);
    sword->sprite_left = sfSprite_create();
    sfSprite_setTexture(sword->sprite_left, sword->texture_left, sfTrue);
    sfSprite_setTextureRect(sword->sprite_left, sword->rect);
    sfSprite_setScale(sword->sprite_left, (sfVector2f){0.4, 0.4});
    return (sword);
}

all_attack_t *init_all_attack(void)
{
    all_attack_t *all_attack = malloc(sizeof(all_attack_t));

    if (!all_attack)
        return NULL;
    all_attack->sword = init_sword();
    return (all_attack);
}
