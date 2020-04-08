/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** my_sh
*/

#include "proto.h"

static int command(int ac, char **av)
{
    my_printf("Nb arg = %d\n", ac);
}

void my_sh(list_t env)
{
    size_t size = 0;
    char* buffer = NULL;
    char **av = NULL;

    (void) env;
    my_printf("$> ");
    while (getline(&buffer, &size, stdin)) {
        // to remove in command
        if (my_strcmp(buffer, "exit")) {
            my_printf("exit\n");
            exit(0);
        }
        av = str_to_word_array(buffer);
        command(count_array(av), av);
        my_printf("$> ");
    }
}
