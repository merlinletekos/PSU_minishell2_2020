/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** exit command
*/

#include "proto.h"

static void free_list(list_t list)
{
    element_t* buffer = list;
    element_t* next = list;

    while (buffer != NULL) {
        next = buffer->next;
        free(buffer);
        buffer = next;
    }
    return;
}

list_t my_exit(int ac, char** av, list_t env)
{
    int value = 0;

    if (ac == 2 && my_str_isnum(av[1]))
        value = my_getnbr(av[1]);
    else if (ac != 1)
        return env;
    free_list(env);
    my_printf("exit\n");
    exit(value);
}