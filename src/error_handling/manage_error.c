/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** manage_error
*/

#include "rpg.h"

int manage_error_handling(int argc, char const *argv[], char const *env[])
{
    if ((check_arg(argc, argv) == 84) || (check_env(env) == 84)
    || check_game_resource() == 84)
        return EPITECH_ERROR;
    return (EXIT_SUCCESS);
}
