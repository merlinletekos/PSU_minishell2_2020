/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** My_cd
*/

#include "proto.h"

list_t my_cd(int ac, char** av, list_t env)
{
    if (ac == 1 && chdir(get_value(env, "HOME")) == 0)
        return env;
    else if (ac != 2)
        return env;
    if (chdir(av[1]) == 0)
        return env;
    return env;
}
