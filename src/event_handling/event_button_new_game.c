/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** event_button_settings
*/

#include "rpg.h"

static int reset_game_values(rpg_t *game)
{
    if (!game)
        return (EPITECH_ERROR);
    game->quests->quest1->active = false;
    game->quests->quest1->done = false;
    game->quests->quest2->active = false;
    game->quests->quest2->done = false;
    game->quests->quest3->active = false;
    game->quests->quest3->done = false;
    game->mob->mob_alien->life = 50;
    game->mob->mob_knight->life = 50;
    game->inventory->item->has_key = false;
    game->inventory->item->key = false;
    return (EPITECH_SUCCESS);
}

int manage_event_button_new_game(rpg_t *game, sfVector2i mouse_pos)
{
    if (!game)
        return EPITECH_ERROR;
    if (button_is_clicked(game->btn->new_game_b, mouse_pos)) {
        game->btn->wait = true;
        game->btn->button_clicked = "new";
        game->object[LINE_PLAYER_RED]->position.x = 425;
        game->object[LINE_PLAYER_RED]->position.y = 1220;
        sfSprite_setScale(game->object[LINE_PLAYER_RED]->sprite,
        (sfVector2f){1, 1});
        sfMusic_stop(game->set_vol->theme);
        sfMusic_play(game->set_vol->game_music);
        reset_game_values(game);
    }
    return (EPITECH_SUCCESS);
}
