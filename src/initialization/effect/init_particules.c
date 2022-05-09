/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** init_particules
*/

#include "rpg.h"

void add_elt_list(list_particule_t *list)
{
    element_particule_t *new = malloc(sizeof(element_particule_t));
    sfRectangleShape *shape_rain = sfRectangleShape_create();

    init_particule_color_rain(shape_rain, new);
    new->shape = shape_rain;
    new->next = new;
    new->prev = new;
    new->direction = false;
    new->speed = (rand() % (10 + 1 - 5)) + 5;
    if (!list->start) {
        list->start = new;
    } else {
        new->prev = list->start->prev;
        new->next = list->start;
        list->start->prev->next = new;
        list->start->prev = new;
    }
    list->size += 1;
}

static list_particule_t *init_list_particules(int nb_particules)
{
    list_particule_t *list = malloc(sizeof(list_particule_t));

    list->start = NULL;
    list->size = 0;
    for (int i = 0; i < nb_particules; i++)
        add_elt_list(list);
    return (list);
}

void add_elt_list_flies(list_particule_t *list)
{
    element_particule_t *new = malloc(sizeof(element_particule_t));
    sfRectangleShape *shape_rain = sfRectangleShape_create();

    init_particule_color_flies(shape_rain, new);
    new->shape = shape_rain;
    new->next = new;
    new->prev = new;
    new->direction = true;
    new->speed = (rand() % (4 + 1 - 2)) + 2;
    if (!list->start) {
        list->start = new;
    } else {
        new->prev = list->start->prev;
        new->next = list->start;
        list->start->prev->next = new;
        list->start->prev = new;
    }
    list->size += 1;
}

static list_particule_t *init_list_particules_flies(int nb_particules)
{
    list_particule_t *list = malloc(sizeof(list_particule_t));

    list->start = NULL;
    list->size = 0;
    for (int i = 0; i < nb_particules; i++)
        add_elt_list_flies(list);
    return (list);
}

particules_t *init_particules(void)
{
    particules_t *particules = malloc(sizeof(particules_t));

    particules->rain = init_list_particules(100);
    particules->flies = init_list_particules_flies(5);
    return (particules);
}
