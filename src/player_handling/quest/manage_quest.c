/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** manage_quests
*/

#include "rpg.h"

static int manage_quest6(rpg_t *game)
{
    if (game->inventory->item->key) {
            game->quests->quest4->active = true;
            game->quests->quest3->done = true;
    }
    if (game->quests->quest4->active) {
        game->mob->pnj_spawn->dialogue_box->buffer =
        return_buffer_map(NPC_DIALOGUE_QUEST4);
        game->mob->pnj_spawn->dialogue_box->text_dialogue =
        str_to_tab_path(game->mob->pnj_spawn->dialogue_box->buffer, '\n');
    }
    return (EPITECH_SUCCESS);
}

int manage_quest(sfRenderWindow *window, rpg_t *game)
{
    manage_quest1(window, game);
    manage_quest2(window, game);
    manage_quest3(game);
    manage_quest4(window, game);
    manage_quest5(window, game);
    manage_quest6(game);
    return (EPITECH_SUCCESS);
}
