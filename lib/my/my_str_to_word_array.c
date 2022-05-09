/*
** EPITECH PROJECT, 2021
** MY_STR_TO_WORD_ARRAY
** File description:
** lalalalalalalalalala
*/

#include <stdlib.h>

int my_strlen(char const *str);
int my_strncpy(char *dest, char const *src, int n);

static int alpha_num(char c, char sep)
{
    if (c <= sep || c >= 127)
        return (0);
    return (1);
}

static int count_words(char const *str, char sep)
{
    int len = 0;
    int i = 1;

    if (!str)
        return 84;
    if (alpha_num(str[0], sep) == 1) {
        len = len + 1;
    }
    while (i <= my_strlen(str) - 1) {
        if (alpha_num(str[i + 1], sep) == 1 && alpha_num(str[i], sep) == 0) {
            len = len + 1;
        }
        i = i + 1;
    }
    return (len);
}

static int remove_space(char const *str)
{
    int i = 0;

    if (!str)
        return 84;
    while (str[i] != '\0' && str[i] == ' ' || str[i] == '\t') {
        i++;
    }
    return (i);
}

char **my_str_to_word_array(char const *str, char sep)
{
    int w = count_words(str, sep);
    int i1 = 0;
    int i2 = 0;
    int k = 0;
    char **tab = malloc(sizeof(char *) * (w + 1));

    if (!str)
        return NULL;
    while (str[i1] != '\0') {
        if (alpha_num(str[i1], sep) == 1)
            i2++;
        if (alpha_num(str[i1], sep) == 1 && alpha_num(str[i1 + 1], sep) == 0) {
            tab[k] = malloc(sizeof(char *) * (i2 + 1));
            my_strncpy(tab[k], &str[i1 - i2 + 1], i2);
            i2 = 0;
            k++;
        }
        i1++;
    }
    tab[k] = NULL;
    return tab;
}
