/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** main
*/

#include "proto.h"

int main(int ac, char** av, char** env)
{
    list_t my_env;

    if (ac == 2 && (my_strcmp(av[1], "-h") || my_strcmp(av[1], "--help")))
        return print_helper(av[0]);
    my_env = cp_env(env);
    my_sh(my_env);
    return 0;
}