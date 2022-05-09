/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** ennemy_spawn1
*/

#include "rpg.h"

int manage_mob_alien(sfRenderWindow *window, rpg_t *game)
{
    if (!window || !game)
        return EPITECH_ERROR;
    mob_alien_speed(window, game);
    mob_alien_attack(window, game, game->mob->mob_alien);
    if (game->mob->mob_alien->seconds > 0.15) {
        sfSprite_setTextureRect(game->object[LINE_MOB_ALIEN]->sprite,
        game->mob->mob_alien->rect);
        sfClock_restart(game->mob->mob_alien->clock);
    }
    sfRenderWindow_drawSprite(window, game->object[LINE_MOB_ALIEN]->sprite,
    NULL);
    sfSprite_setPosition(game->object[LINE_MOB_ALIEN]->sprite,
    game->object[LINE_MOB_ALIEN]->position);
    mob_alien_life(window, game);
    return (EPITECH_SUCCESS);
}
