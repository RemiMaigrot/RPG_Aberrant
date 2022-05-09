/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** pnj_spawn
*/

#include "rpg.h"

static int show_dialogue(sfRenderWindow *window, rpg_t *game)
{
    if (game->mob->pnj_spawn->dialogue_box->can_dialogue == true
    && game->mob->pnj_spawn->dialogue_box->active == true) {
        sfRenderWindow_drawText(window,
        game->mob->pnj_spawn->dialogue_box->text, NULL);
    } else if (game->mob->pnj_spawn->dialogue_box->active == false) {
        sfRenderWindow_drawSprite(window, game->object[LINE_DIALOGUE]->sprite,
        NULL);
    }
    return (EPITECH_SUCCESS);
}

int manage_dialogue_mob_oldman(sfRenderWindow *window, rpg_t *game)
{
    if (!window || !game)
        return EPITECH_ERROR;
    if (collision_dialogue(game, game->mob->pnj_spawn)) {
        game->mob->pnj_spawn->dialogue_box->can_dialogue = true;
        show_dialogue(window, game);
    } else {
        game->mob->pnj_spawn->dialogue_box->can_dialogue = false;
        game->mob->pnj_spawn->dialogue_box->active = false;
        game->mob->pnj_spawn->dialogue_box->index = 0;
    }
    return (EPITECH_SUCCESS);
}

int manage_speed_mob_oldman(sfRenderWindow *window, rpg_t *game)
{
    if (!window || !game)
        return EPITECH_ERROR;
    game->mob->pnj_spawn->time =
    sfClock_getElapsedTime(game->mob->pnj_spawn->clock);
    game->mob->pnj_spawn->seconds =
    game->mob->pnj_spawn->time.microseconds / 1000000.0;
    return (EPITECH_SUCCESS);
}

int manage_mob_oldman(sfRenderWindow *window, rpg_t *game)
{
    if (!window || !game)
        return EPITECH_ERROR;
    manage_speed_mob_oldman(window, game);
    if (game->mob->pnj_spawn->seconds > 0.15) {
        sfSprite_setTextureRect(game->object[LINE_MOB_OLDMAN]->sprite,
        game->mob->pnj_spawn->rect);
        sfClock_restart(game->mob->pnj_spawn->clock);
    }
    sfRenderWindow_drawSprite(window, game->object[LINE_MOB_OLDMAN]->sprite,
    NULL);
    sfSprite_setPosition(game->object[LINE_MOB_OLDMAN]->sprite,
    game->object[LINE_MOB_OLDMAN]->position);
    manage_dialogue_mob_oldman(window, game);
    return (EPITECH_SUCCESS);
}
