/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** init_tab_button
*/

#include "rpg.h"

char **init_button_rsc2(char *sound, char *texture)
{
    char **tab = malloc(sizeof(char *) * 2);

    if (!texture || !sound)
        return NULL;
    tab[0] = sound;
    tab[1] = texture;
    return tab;
}
