/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** manage_effect_btn_click
*/

#include "rpg.h"

int manage_effect_btn_click(sfRenderWindow *window, rpg_t *game)
{
    effect_btn_load(game);
    effect_btn_ctrl(game);
    effect_btn_exit(window, game);
    effect_btn_new_game(game);
    effect_btn_setting(game);
    effect_btn_htp(game);
    effect_btn_back(game);
    return (EPITECH_SUCCESS);
}
