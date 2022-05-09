/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** manage_quests
*/

#include "rpg.h"

int manage_quest1(sfRenderWindow *window, rpg_t *game)
{
    if (game->quests->quest1->active == true &&
    game->quests->quest1->done == false) {
        sfRenderWindow_drawText(window, game->quests->quest1->text, NULL);
    }
    return (EPITECH_SUCCESS);
}

int manage_quest2(sfRenderWindow *window, rpg_t *game)
{
    if (game->quests->quest2->active == true &&
    game->quests->quest2->done == false) {
        sfRenderWindow_drawText(window, game->quests->quest2->text, NULL);
    }
    return (EPITECH_SUCCESS);
}

int manage_quest3(rpg_t *game)
{
    if (game->mob->mob_alien->life <= 0 && game->mob->mob_knight->life <= 0 &&
    game->quests->quest4->active == false) {
        game->mob->pnj_spawn->dialogue_box->buffer =
        return_buffer_map(NPC_DIALOGUE_QUEST3);
        game->mob->pnj_spawn->dialogue_box->text_dialogue =
        str_to_tab_path(game->mob->pnj_spawn->dialogue_box->buffer, '\n');
        game->quests->quest1->done = true;
        game->quests->quest2->active = true;
    }
    return (EPITECH_SUCCESS);
}

int manage_quest4(sfRenderWindow *window, rpg_t *game)
{
    if (!game)
        return (EPITECH_ERROR);
    if (game->quests->quest3->active)
        sfRenderWindow_drawText(window, game->quests->quest3->text, NULL);
    return (EPITECH_SUCCESS);
}

int manage_quest5(sfRenderWindow *window, rpg_t *game)
{
    if (!game)
        return (EPITECH_ERROR);
    if (game->inventory->item->key) {
        game->quests->quest3->active = false;
        sfRenderWindow_drawText(window, game->quests->quest2->text, NULL);
    }
    return (EPITECH_SUCCESS);
}
