/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** init_image
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdio.h>
#include "rpg.h"

static int count_nb_asset(void)
{
    int nb_asset = 0;
    FILE *file;
    ssize_t nread;
    size_t len = 0;
    char *line = NULL;

    file = fopen(ASSET_FILE_PATH, "r");
    if (!file)
        return EPITECH_ERROR;
    while ((nread = getline(&line, &len, file)) != -1)
        nb_asset += 1;
    fclose(file);
    return nb_asset + 1;
}

static char *get_new_line(char *line)
{
    char *new_line = NULL;

    if (!line)
        return NULL;
    new_line = malloc(sizeof(char) * my_strlen(line));
    if (!new_line)
        return NULL;
    for (int i = 0; line[i] != '\0'; i++) {
        if (line[i] == '\n')
            break;
        new_line[i] = line[i];
    }
    new_line[my_strlen(line ) - 1] = '\0';
    return new_line;
}

static int init_loop(rpg_t *game, char *new_line, char *line, FILE *file)
{
    int i = 0;
    size_t len = 0;
    ssize_t nread;

    for (;(nread = getline(&line, &len, file)) != -1; ++i) {
        game->object[i] = malloc(sizeof(object_t));
        game->object[i]->sprite = sfSprite_create();
        new_line = get_new_line(line);
        game->object[i]->texture = sfTexture_createFromFile(new_line, NULL);
        free(new_line);
        game->object[i]->scale = (sfVector2f){1, 1};
        game->object[i]->position = (sfVector2f){0, 0};
        game->object[i]->shape = sfRectangleShape_create();
        if (!game->object[i]->sprite || !game->object[i]->texture)
            return EPITECH_ERROR;
        sfSprite_setTexture(game->object[i]->sprite, game->object[i]->texture,
        sfTrue);
    }
    return i;
}

int init_asset(rpg_t *game)
{
    if (!game)
        return EPITECH_ERROR;
    int nb_asset = 0;
    FILE *file;
    char *line = NULL;
    char *new_line = NULL;
    int index_loop = 0;

    file = fopen(ASSET_FILE_PATH, "r");
    if (!file)
        return EPITECH_ERROR;
    nb_asset = count_nb_asset();
    game->object = malloc(sizeof(object_t *) * (nb_asset));
    if (!game->object)
        return EPITECH_ERROR;
    index_loop = init_loop(game, new_line, line, file);
    game->object[index_loop] = NULL;
    free(line);
    fclose(file);
    return EPITECH_SUCCESS;
}
