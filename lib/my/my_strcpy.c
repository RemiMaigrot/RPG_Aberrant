/*
** EPITECH PROJECT, 2021
** MY_STRCPY
** File description:
** lalallala
*/

#include <stddef.h>

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    if (!src || !dest)
        return NULL;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i = i + 1;
    }
    dest[i] = '\0';
    return (dest);
}
