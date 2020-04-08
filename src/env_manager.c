/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** env manager
*/

#include "proto.h"

char *BRT_PATH = "/bin:/sbin:/usr/bin:/usr/sbin";

list_t cp_env(char** env)
{
    list_t my_env = NULL;
    char *name;
    char *value;

    if (env == NULL)
        my_env = add_element_e(my_env, "PATH", BRT_PATH);
    else {
        for (int i = 0; env[i] && env != NULL; i++) {
            name = prv_strparser(env[i], '=');
            value = my_strparser(env[i], '=');
            my_env = add_element_e(my_env, name, value);
        }
    }
    return my_env;
}