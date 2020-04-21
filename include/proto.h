/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** All my proto
*/

#ifndef PSU_MINISHELL2_2019_PROTO_H
#define PSU_MINISHELL2_2019_PROTO_H

#include "my.h"
#include "printlib.h"
#include "linklib.h"
#include "link_struct.h"

#include <stdlib.h>
#include <stdio.h>

list_t cp_env(char** env);
void my_sh(list_t env);
int my_env(list_t env);
int my_exit(list_t env);
list_t my_setenv(int ac, char** av, list_t env);

#endif //PSU_MINISHELL2_2019_PROTO_H
