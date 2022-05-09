/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** init_all
*/

#include "rpg.h"

static int init_game_ui_struct(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    game->maps = init_all_maps(game);
    game->view = init_view();
    game->view_menu = init_view_menu();
    game->pause_menu = init_pause_menu();
    game->inventory = init_inventory(game);
    game->potion = init_arena_potion(game);
    if (manage_player_choice_menu(game) == EPITECH_ERROR
    || init_button_choice(game) == 84)
        return EPITECH_ERROR;
    return EPITECH_SUCCESS;
}

static int init_entitie_struct(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    game->player = init_player(game);
    game->mob = init_all_mob(game);
    return (EPITECH_SUCCESS);
}

static int init_game_struct(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    game->set_vol = init_volume();
    game->particules = init_particules();
    game->attack = init_all_attack();
    if (init_asset(game) == 84 || init_buttons(game) == 84
    || init_entitie_struct(game) == 84 || init_game_ui_struct(game) == 84)
        return EPITECH_ERROR;
    game->all_effect = init_all_effect(game);
    game->tp_boss = init_tp_to_arena(game);
    game->quests = init_all_quest();
    if (check_struct_pointeur(game) == EPITECH_ERROR)
        return EPITECH_ERROR;
    return EPITECH_SUCCESS;
}

int check_struct_pointeur(rpg_t *game)
{
    if (!game || !game->maps || !game->btn || !game->view || !game->mob
    || !game->all_effect || !game->pause_menu || !game->set_vol
    || !game->inventory || !game->particules || !game->attack
    || !game->tp_boss || !game->view_menu || !game->player || !game->quests
    || !game->potion)
        return EPITECH_ERROR;
    return EPITECH_SUCCESS;
}

rpg_t *init_game(void)
{
    rpg_t *game = malloc(sizeof(rpg_t));

    if (!game)
        return NULL;
    game->change_menu = MENU;
    if (init_game_struct(game) == EPITECH_ERROR)
        return NULL;
    return (game);
}
