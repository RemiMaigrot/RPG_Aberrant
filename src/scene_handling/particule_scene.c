/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** particule_scene
*/

#include "rpg.h"

int draw_particules(sfRenderWindow *window, rpg_t *game)
{
    element_particule_t *node = game->particules->rain->start;

    if (!game || !window)
        return EPITECH_ERROR;
    for (int i = 0; i < game->particules->rain->size; i++) {
        if (node->pos.y > 1385)
            node->pos = (sfVector2f){rand() % 3840,
            (rand() % (1920 + 1 - 600)) + 600};
        node->pos.y += node->speed;
        node->pos.x -= node->speed;
        sfRectangleShape_setPosition(node->shape, node->pos);
        sfRenderWindow_drawRectangleShape(window, node->shape, NULL);
        node = node->next;
    }
    return EPITECH_SUCCESS;
}

static int show_rect_particules_flies(sfRenderWindow *window,
element_particule_t *node)
{
    if (!node || !window)
        return EPITECH_ERROR;
    sfRectangleShape_setPosition(node->shape, node->pos);
    sfRenderWindow_drawRectangleShape(window, node->shape, NULL);
    node = node->next;
    return (EPITECH_SUCCESS);
}

void draw_particules_flies(sfRenderWindow *window, rpg_t *game)
{
    element_particule_t *node = game->particules->flies->start;

    for (int i = 0; i < game->particules->flies->size; i++) {
        if (node->pos.y > 520) {
            node->direction = false;
            node->pos.x = (rand() % (296 + 1 - 257)) + 257;
            node->speed = (rand() % (4 + 1 - 2)) + 2;
        }
        if (node->pos.y < 480) {
            node->direction = true;
            node->pos.x = (rand() % (296 + 1 - 257)) + 257;
            node->speed = (rand() % (4 + 1 - 2)) + 2;
        }
        if (node->direction == true) {
            node->pos.y += node->speed;
        } else if (node->direction == false) {
            node->pos.y -= node->speed;
        }
        show_rect_particules_flies(window, node);
    }
}
