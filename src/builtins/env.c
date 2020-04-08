/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** print my env
*/

#include "proto.h"

int my_env(list_t env)
{
    element_t* buffer = env;

    while (buffer != NULL) {
        my_printf("%s=%s\n", buffer->name, buffer->value);
        buffer = buffer->next;
    }
    return 0;
}