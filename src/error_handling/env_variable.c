/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** env_variable
*/

#include "rpg.h"

int check_env(char const *env[])
{
    if (!env)
        return 84;
    for (int i = 0; env[i] != NULL; i += 1) {
        if (my_strncmp(env[i], "DISPLAY=", 8) == 0)
            return 0;
    }
    return EPITECH_ERROR;
}
