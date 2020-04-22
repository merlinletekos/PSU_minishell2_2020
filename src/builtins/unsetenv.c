/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** Unsetenv
*/

#include "proto.h"

static list_t remove_elem(char *env_name, list_t env)
{
    element_t* buffer = env;
    element_t* last = NULL;

    while (buffer != NULL) {
        if (my_strcmp(buffer->name, env_name)) {
            last->next = buffer->next;
            free(buffer);
            return env;
        }
        last = buffer;
        buffer = buffer->next;
    }
    return env;
}

list_t my_unsetenv(int ac, char** av, list_t env)
{
    if (ac == 1)
        return env;
    for (int i = 1; i < ac; i++)
        env = remove_elem(av[i], env);
    return env;
}
