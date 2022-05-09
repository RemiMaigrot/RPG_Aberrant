/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** error_handling
*/

#include "rpg.h"

int check_arg(int argc, char const *argv[])
{
    if (!argv || argc != 1)
        return EPITECH_ERROR;
    return EPITECH_SUCCESS;
}
