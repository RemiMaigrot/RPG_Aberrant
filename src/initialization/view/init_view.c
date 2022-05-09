/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** init_view
*/

#include "rpg.h"

view_player_t *init_view(void)
{
    view_player_t *view_player = malloc(sizeof(view_player_t));

    if (!view_player)
        return NULL;
    view_player->view = sfView_create();
    view_player->view_center = (sfVector2f){200, 200};
    sfView_setCenter(view_player->view, view_player->view_center);
    sfView_setSize(view_player->view, (sfVector2f){750, 375});
    view_player->speed_view = 3;
    return (view_player);
}

view_player_t *init_view_menu(void)
{
    view_player_t *view_menu = malloc(sizeof(view_player_t));

    if (!view_menu)
        return NULL;
    view_menu->view = sfView_create();
    view_menu->view_center = (sfVector2f){1920 / 2, 1007 / 2};
    sfView_setCenter(view_menu->view, view_menu->view_center);
    sfView_setSize(view_menu->view, (sfVector2f){1920, 1007});
    view_menu->speed_view = 3;
    return (view_menu);
}
