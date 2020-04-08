/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** my_sh
*/

#include "proto.h"

void my_sh(list_t env)
{
    int size = 0;
    char* buffer = NULL;

    my_printf("$> ");
    while (getline(&buffer, &size, stdin)) {
        my_printf("$> ");
    }
}