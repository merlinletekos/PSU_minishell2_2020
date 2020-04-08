/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** my_sh
*/

#include "proto.h"

void my_sh(list_t env)
{
    size_t size = 0;
    char* buffer = NULL;

    (void) env;
    my_printf("$> ");
    while (getline(&buffer, &size, stdin)) {
        if (my_strcmp(buffer, "exit")) {
            my_printf("exit\n");
            exit(0);
        }
        my_printf("$> ");
    }
}