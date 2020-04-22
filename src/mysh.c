/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** my_sh
*/

#include "proto.h"

static list_t command(int ac, char **av, list_t env)
{
    if (my_strcmp(av[0], "exit"))
        my_exit(env);
    if (my_strcmp(av[0], "env"))
        my_env(env);
    if (my_strcmp(av[0], "setenv"))
        env = my_setenv(ac, av, env);
    if (my_strcmp(av[0], "unsetenv"))
        env = my_unsetenv(ac, av, env);
    return env;
}

void my_sh(list_t env)
{
    size_t size = 0;
    char* buffer = NULL;
    char **av = NULL;

    my_printf("$> ");
    while (getline(&buffer, &size, stdin) != -1) {
        av = str_to_word_array(buffer);
        env = command(count_array(av), av, env);
        my_printf("$> ");
    }
    my_exit(env);
}
