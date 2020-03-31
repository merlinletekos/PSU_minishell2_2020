/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** main
*/

#include "proto.h"

int main(int ac, char** av)
{
    if (ac == 2 && (my_strcmp(av[1], "-h") || my_strcmp(av[1], "--help")))
        return print_helper(av[0]);
    return 0;
}