/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** my_sh
*/

#include "proto.h"

static int command(int ac, char **av, list_t env)
{
    if (my_strcmp(av[0], "exit"))
        my_exit(env);
    if (my_strcmp(av[0], "env"))
        my_env(env);
    return 0;
}

void my_sh(list_t env)
{
    size_t size = 0;
    char* buffer = NULL;
    char **av = NULL;

    my_printf("$> ");
    while (getline(&buffer, &size, stdin)) {
        av = str_to_word_array(buffer);
        command(count_array(av), av, env);
        my_printf("$> ");
    }
}
