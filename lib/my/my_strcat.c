/*
** EPITECH PROJECT, 2021
** MY_STRCAT
** File description:
** lalalallallaa
*/

#include <stddef.h>

static int len_stringoui(char const *str)
{
    int i = 0;

    if (!str)
        return 84;
    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}

char *my_strcat(char *dest, char const *src)
{
    int i_src = 0;
    int len_src = len_stringoui(src);
    int len_dest = len_stringoui(dest);

    if (!dest || !src)
        return NULL;
    while (i_src != len_src) {
        dest[len_dest + i_src] = src[i_src];
        i_src = i_src + 1;
    }
    return dest;
}
