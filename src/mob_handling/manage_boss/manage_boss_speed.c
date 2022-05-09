/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** manage_boss_speed
*/

#include "rpg.h"

int manage_boss_speed(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    game->mob->boss->time =
        sfClock_getElapsedTime(game->mob->boss->clock);
    game->mob->boss->seconds =
        game->mob->boss->time.microseconds / 1000000.0;
    return (EPITECH_SUCCESS);
}
