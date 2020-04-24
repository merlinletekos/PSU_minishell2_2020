/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** print my env
*/

#include "proto.h"

list_t my_env(int ac, char** av, list_t env)
{
    element_t* buffer = env;
    char* value;

    (void) ac;
    (void) av;
    while (buffer != NULL) {
        value = buffer->value == NULL ? "" : buffer->value;
        my_printf("%s=%s\n", buffer->name, value);
        buffer = buffer->next;
    }
    return env;
}