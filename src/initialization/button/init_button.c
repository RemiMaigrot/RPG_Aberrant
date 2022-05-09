/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** init_buttons
*/

#include "rpg.h"

int init_button_shape(button_t **button, int size, char **tab)
{
    if (!tab || !button)
        return EPITECH_ERROR;
    (*button)->sound = sfMusic_createFromFile(tab[0]);
    if ((*button)->sound == NULL)
        return EPITECH_ERROR;
    (*button)->shape = sfRectangleShape_create();
    if ((*button)->shape == NULL)
        return EPITECH_ERROR;
    if (size == SMALL)
        sfRectangleShape_setSize((*button)->shape, (sfVector2f){70, 70});
    if (size == MEDIUM)
        sfRectangleShape_setSize((*button)->shape, (sfVector2f){360, 120});
    sfRectangleShape_setPosition((*button)->shape, (*button)->position);
    sfRectangleShape_setFillColor((*button)->shape,
    sfColor_fromRGBA(0, 0, 255, 150));
    return EXIT_SUCCESS;
}

int init_button(button_t **button, sfVector2f position, int size, char **tab)
{
    if (!tab || !button)
        return EPITECH_ERROR;
    (*button) = malloc(sizeof(button_t));
    if (!(*button))
        return EPITECH_ERROR;
    (*button)->position = position;
    init_button_shape(button, size, tab);
    (*button)->texture = sfTexture_createFromFile(tab[1], NULL);
    if ((*button)->texture == NULL)
        return EPITECH_ERROR;
    (*button)->sprite = sfSprite_create();
    if ((*button)->sprite == NULL)
        return EPITECH_ERROR;
    sfSprite_setTexture((*button)->sprite, (*button)->texture, sfTrue);
    sfSprite_setPosition((*button)->sprite, position);
    (*button)->sprite_pos = sfSprite_getPosition((*button)->sprite);
    (*button)->bsize = size;
    return EXIT_SUCCESS;
}

static int init_small_buttons(rpg_t *game)
{
    char **tab = init_button_rsc2(BUTTON_SOUND_PATH, BUTTON_PATH);

    if (!game || !tab)
        return EPITECH_ERROR;
    if (init_button(&(game->btn->settings_b), (sfVector2f){50, 900},
    SMALL, tab) == EPITECH_ERROR)
        return EPITECH_ERROR;
    if (init_button(&(game->btn->how_to_play_b), (sfVector2f){1800, 50},
    SMALL, tab) == EPITECH_ERROR)
        return EPITECH_ERROR;
    return (EXIT_SUCCESS);
}

static int init_medium_buttons(rpg_t *game)
{
    char **tab = init_button_rsc2(BUTTON_SOUND_PATH, BUTTON_PATH);

    if (!tab || !game)
        return (EPITECH_ERROR);
    if (init_button(&(game->btn->new_game_b), (sfVector2f){750, 200},
    MEDIUM, tab) == EPITECH_ERROR)
        return EPITECH_ERROR;
    if (init_button(&(game->btn->load_b), (sfVector2f){750, 400},
    MEDIUM, tab) == EPITECH_ERROR)
        return EPITECH_ERROR;
    if (init_button(&(game->btn->controls_b), (sfVector2f){750, 600},
    MEDIUM, tab) == EPITECH_ERROR)
        return EPITECH_ERROR;
    if (init_button(&(game->btn->exit_b), (sfVector2f){750, 800},
    MEDIUM, tab) == EPITECH_ERROR)
        return (EPITECH_ERROR);
    if (init_button(&(game->btn->back_b), (sfVector2f){20, 870},
    MEDIUM, tab) == EPITECH_ERROR)
        return (EPITECH_ERROR);
    return (EPITECH_SUCCESS);
}

int init_buttons(rpg_t *game)
{
    game->btn = malloc(sizeof(all_button_t));

    if (!game->btn || init_small_buttons(game) == EPITECH_ERROR
    || init_medium_buttons(game) == EPITECH_ERROR)
        return EPITECH_ERROR;
    game->btn->clock = sfClock_create();
    game->btn->time = sfClock_getElapsedTime(game->btn->clock);
    game->btn->seconds = 0.0;
    game->btn->wait = false;
    game->btn->button_clicked = NULL;
    return (EPITECH_SUCCESS);
}
