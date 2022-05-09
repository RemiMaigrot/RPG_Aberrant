/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** event_key
*/

#include "rpg.h"

int press_escape_to_pause(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    game->change_menu = PAUSE;
    return (EPITECH_SUCCESS);
}

int press_e_to_dialogue(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    game->mob->pnj_spawn->dialogue_box->active = true;
    if (game->mob->pnj_spawn->dialogue_box->active == true)
        dialogue_with_oldman(game, game->mob->pnj_spawn);
    return EPITECH_SUCCESS;
}

int keyboard_event(rpg_t *game, sfEvent event)
{
    if (!game)
        return EPITECH_ERROR;
    if (event.type == sfEvtKeyPressed) {
        if (event.key.code == sfKeyEscape && game->change_menu == GAME)
            press_escape_to_pause(game);
        if (event.key.code == sfKeyE && game->change_menu == GAME)
            press_e_to_dialogue(game);
        if (event.key.code == sfKeySpace && game->change_menu == GAME)
            player_attacking(game);
    }
    return (EPITECH_SUCCESS);
}
