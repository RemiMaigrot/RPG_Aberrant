/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** event_show_dialogue
*/

#include "rpg.h"

int dialogue_with_oldman(rpg_t *game, pnj_t *pnj)
{
    if (!game || !pnj)
        return EPITECH_ERROR;
    if (pnj->dialogue_box->text_dialogue[pnj->dialogue_box->index]) {
        sfText_setString(pnj->dialogue_box->text,
        pnj->dialogue_box->text_dialogue[pnj->dialogue_box->index]);
        pnj->dialogue_box->index += 1;
    } else {
        pnj->dialogue_box->index = 0;
        if (game->mob->mob_alien->life <= 0 &&
        game->mob->mob_knight->life <= 0) {
            game->quests->quest2->done = true;
            game->quests->quest3->active = true;
        } else
            game->quests->quest1->active = true;
    }
    return (EPITECH_SUCCESS);
}
