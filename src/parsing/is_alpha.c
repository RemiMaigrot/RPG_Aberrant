/*
** EPITECH PROJECT, 2021
** my_showmem.c
** File description:
** withouth functions
*/

#include "rpg.h"

int is_alphanum_array(const char *str, const char sep, int index)
{
    int i = 0;

    if (str == NULL)
        return i;
    while (str[index] != sep && str[index] != '\0') {
        ++i;
        ++index;
    }
    return i;
}
