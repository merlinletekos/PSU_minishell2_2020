/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** exit command
*/

#include "proto.h"

static void free_list(list_t list)
{
    return;
}

int my_exit(list_t env)
{
    free_list(env);
    my_printf("exit\n");
    exit(0);
}