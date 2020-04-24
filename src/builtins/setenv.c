/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** set env variable
*/

#include "proto.h"

static size_t count_egal(char* av)
{
    size_t egal = 0;

    for (int i = 0; av[i] != '\0'; i++)
        if (av[i] == '=')
            egal++;
    return egal;
}

list_t one_value(list_t env, char* av)
{
    element_t* buffer = env;
    char* name;
    char* value;
    size_t egal = count_egal(av);

    if (egal <= 1) {
        name = egal == 1 ? prv_strparser(av, '=') : av;
        value = egal == 1 ? my_strparser(av, '=') : NULL;
    }
    else
        return env;
    while (buffer != NULL) {
        if (my_strcmp(name, buffer->name)) {
            buffer->value = value;
            return env;
        }
        buffer = buffer->next;
    }
    return add_element_e(env, name, value);
}

list_t my_setenv(int ac, char** av, list_t env)
{
    element_t* buffer = env;

    if (ac == 1)
        return my_env(ac, av, env);
    if (ac > 3)
        return env;
    if (ac == 2)
        return one_value(env, av[1]);
    while (buffer != NULL) {
        if (my_strcmp(buffer->name, av[1])) {
            buffer->value =  av[2];
            return env;
        }
        buffer = buffer->next;
    }
    env = add_element_e(env, av[1], av[2]);
    return env;
}
