/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** int_to_str
*/

#include "rpg.h"

void convert_int_to_str(char str[], int nb)
{
    int index = 0;
    int calcul = 0;
    int len_string = 0;
    int n = nb;

    while (n != 0) {
        n /= 10;
        len_string++;
    }
    for (index = 0; index < len_string; index++) {
        calcul = nb % 10;
        nb = nb / 10;
        str[len_string - (index + 1)] = calcul + '0';
    }
    str[len_string] = '\0';
}
