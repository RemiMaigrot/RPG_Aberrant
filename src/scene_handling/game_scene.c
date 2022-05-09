/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** game_scene
*/

#include "rpg.h"

int manage_game_scene(sfRenderWindow *window, rpg_t *game)
{
    manage_view(window, game);
    manage_arena(window, game);
    move_player(window, game);
    manage_all_mob(window, game);
    manage_effect(window, game);
    draw_particules(window, game);
    draw_particules_flies(window, game);
    manage_attack_player(window, game);
    sfRenderWindow_drawSprite(window,
    game->object[LINE_COLLISION_LAYER]->sprite, NULL);
    manage_damage_enemy(window, game);
    manage_inventory(window, game);
    manage_tp(game, window);
    return (EPITECH_SUCCESS);
}
