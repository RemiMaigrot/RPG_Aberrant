/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** main
*/

#include "rpg.h"

int main(int argc, char const *argv[], char const *env[])
{
    if (manage_error_handling(argc, argv, env) == EPITECH_ERROR)
        return (EPITECH_ERROR);
    return (my_rpg());
}
