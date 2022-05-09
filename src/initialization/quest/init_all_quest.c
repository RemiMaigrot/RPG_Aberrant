/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** init_all_quest
*/

#include "rpg.h"

quests_t *init_all_quest(void)
{
    quests_t *quests = malloc(sizeof(quests_t));

    if (!quests)
        return NULL;
    quests->quest1 = init_quest(QUEST1);
    quests->quest2 = init_quest(QUEST2);
    quests->quest3 = init_quest(QUEST3);
    quests->quest4 = init_quest(QUEST4);
    return (quests);
}
