/*
** EPITECH PROJECT, 2021
** my_strndup
** File description:
** my_strndup
*/

#include "rpg.h"

char *my_strndup(char const *src, int n)
{
    char *dest = NULL;

    if (src == NULL)
        return NULL;
    dest = malloc(sizeof(char) * (n + 1));
    if (dest == NULL)
        return NULL;
    my_strncpy(dest, src, n);
    dest[n] = '\0';
    return dest;
}
