/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** init_quest1
*/

#include "rpg.h"

quest_t *init_quest(char *dialogue)
{
    quest_t *quest = malloc(sizeof(quest_t));

    if (!quest)
        return NULL;
    quest->active = false;
    quest->done = false;
    quest->dialogue = return_buffer_map(dialogue);
    quest->text = sfText_create();
    quest->font = sfFont_createFromFile(FONT);
    sfText_setString(quest->text, quest->dialogue);
    sfText_setFont(quest->text, quest->font);
    sfText_setPosition(quest->text, (sfVector2f){20, 20});
    return (quest);
}
