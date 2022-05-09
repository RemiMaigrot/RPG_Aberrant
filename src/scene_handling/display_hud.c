/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** display_hud
*/

#include "rpg.h"

int display_menu_hud(sfRenderWindow *window, rpg_t *game)
{
    if (!game || !window)
        return EPITECH_ERROR;
    sfSprite_setPosition(game->object[LINE_HUD_MID]->sprite,
    (sfVector2f){496, 235});
    sfRenderWindow_drawSprite(window, game->object[LINE_HUD_MID]->sprite,
    NULL);
    sfSprite_setPosition(game->object[LINE_HUD_TOP]->sprite,
    (sfVector2f){478, 95});
    sfRenderWindow_drawSprite(window, game->object[LINE_HUD_TOP]->sprite,
    NULL);
    return EPITECH_SUCCESS;
}
