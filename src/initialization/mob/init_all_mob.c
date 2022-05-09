/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** init_all_ennemies
*/

#include "rpg.h"

all_mob_t *init_all_mob(rpg_t *game)
{
    all_mob_t *mob = malloc(sizeof(all_mob_t));

    if (!mob)
        return NULL;
    mob->boss = init_boss(game, 2100, 200);
    mob->mob_bat = init_bat(game, 1150, 1150);
    mob->mob_alien = init_alien(game, 550, 600);
    mob->mob_knight = init_knight(game, 400, 850);
    mob->pnj_spawn = init_mob_oldman(game, 104, 1200);
    return (mob);
}
