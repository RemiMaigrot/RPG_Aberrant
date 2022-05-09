/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** manage_ennemies
*/

#include "rpg.h"

int manage_all_mob(sfRenderWindow *window, rpg_t *game)
{
    if (!game || !window)
        return EPITECH_ERROR;
    if (game->mob->mob_alien->is_alive)
        manage_mob_alien(window, game);
    if (game->mob->mob_knight->is_alive)
        manage_mob_knight(window, game);
    if (game->mob->mob_bat->is_alive)
        manage_mob_bat(window, game);
    manage_mob_oldman(window, game);
    return (EPITECH_SUCCESS);
}
