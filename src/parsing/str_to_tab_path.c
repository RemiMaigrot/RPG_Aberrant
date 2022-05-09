/*
** EPITECH PROJECT, 2021
** all_command
** File description:
** all_command
*/

#include "rpg.h"

static const char *check_str_and_nb_word(int nb_words, const char *str)
{
    if (nb_words == -1)
        return NULL;
    if (str == NULL)
        return NULL;
    return str;
}

static int count_words_path(const char *str, const char sep)
{
    int i = 0;
    int words = 0;

    if (str == NULL)
        return -1;
    while (str[i] != '\0') {
        if (str[i] == sep) {
            ++words;
        }
        ++i;
    }
    return (words + 1);
}

char **str_to_tab_path(char *str, const char sep)
{
    int nb_words = count_words_path(str, sep);
    int i = 0;
    int rows = 0;
    char **tab = malloc(sizeof(char *) * (nb_words + 1));
    int length_words = 0;

    if (check_str_and_nb_word(nb_words, str) == NULL)
        return NULL;
    while (i < my_strlen(str)) {
        length_words = is_alphanum_array(str, sep, i);
        tab[rows] = my_strndup(&str[i], length_words);
        if (tab == NULL)
            return NULL;
        ++rows;
        i += length_words + 1;
        length_words = 0;
    }
    tab[rows] = NULL;
    return tab;
}
