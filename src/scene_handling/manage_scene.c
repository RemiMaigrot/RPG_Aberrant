/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** manage_scene
*/

#include "rpg.h"

static int manage_scene3(sfRenderWindow *window, rpg_t *game,
sfVector2i mouse_pos)
{
    if (!game)
        return 84;
    if (game->change_menu == WIN) {
        sfRenderWindow_setView(window, game->view_menu->view);
        manage_win_scene(window, game, mouse_pos);
    }
    return (EPITECH_SUCCESS);
}

static int manage_scene2(sfRenderWindow *window, rpg_t *game,
sfVector2i mouse_pos)
{
    if (!game)
        return 84;
    if (game->change_menu == SAVE) {
        sfRenderWindow_setView(window, game->view_menu->view);
        manage_load_scene(window, game, mouse_pos);
    }
    if (game->change_menu == CONTROLS) {
        sfRenderWindow_setView(window, game->view_menu->view);
        manage_controls_scene(window, game, mouse_pos);
    }
    if (game->change_menu == SETTINGS) {
        sfRenderWindow_setView(window, game->view_menu->view);
        manage_settings_scene(window, game, mouse_pos);
    }
    if (game->change_menu == HOW_TO_PLAY) {
        sfRenderWindow_setView(window, game->view_menu->view);
        manage_how_to_play_scene(window, game, mouse_pos);
    }
    return (EPITECH_SUCCESS);
}

int manage_scene(sfRenderWindow *window, rpg_t *game, sfVector2i mouse_pos)
{
    manage_effect_btn_click(window, game);
    if (game->change_menu == GAME)
        manage_game_scene(window, game);
    if (game->change_menu == MENU) {
        sfRenderWindow_setView(window, game->view_menu->view);
        manage_menu_scene(window, game);
        manage_hover_button(game, mouse_pos);
    }
    if (game->change_menu == PAUSE) {
        sfRenderWindow_setView(window, game->view_menu->view);
        manage_pause_scene(window, game, mouse_pos);
    }
    if (game->change_menu == GAME_OVER) {
        sfRenderWindow_setView(window, game->view_menu->view);
        manage_game_over(window, game, mouse_pos);
        game->player->life = 100;
    }
    manage_scene2(window, game, mouse_pos);
    manage_scene3(window, game, mouse_pos);
    return (EPITECH_SUCCESS);
}
