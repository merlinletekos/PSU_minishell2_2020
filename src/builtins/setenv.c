/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** set env variable
*/

#include "proto.h"

list_t my_setenv(int ac, char** av, list_t env)
{
    element_t* buffer = env;

    if (ac != 3)
        return env;
    while (buffer != NULL) {
        if (my_strcmp(buffer->name, av[1])) {
            buffer->value = av[2];
            return env;
        }
        buffer = buffer->next;
    }
    env = add_element_e(env, av[1], av[2]);
    return env;
}
