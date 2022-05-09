/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** init_all_maps
*/

#include "rpg.h"

static map_colorless_t *init_map_colorless(void)
{
    map_colorless_t *map = malloc(sizeof(map_colorless_t));

    if (!map)
        return NULL;
    map->image = sfImage_createFromFile(MAP_COLORLESS);
    return (map);
}

static map_spawn_t *init_map(rpg_t *game)
{
    map_spawn_t *map = malloc(sizeof(map_spawn_t));

    if (!game)
        return NULL;
    return (map);
}

maps_t *init_all_maps(rpg_t *game)
{
    maps_t *maps = malloc(sizeof(maps_t));

    if (!maps || !game)
        return NULL;
    maps->map_spawn = init_map(game);
    maps->map_colorless = init_map_colorless();
    return (maps);
}
