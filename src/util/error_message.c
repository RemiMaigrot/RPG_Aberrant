/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** error_message
*/

#include <unistd.h>
#include "rpg.h"

void error_message(char const *str)
{
    if (!str)
        return;
    write(2, str, my_strlen(str));
}
