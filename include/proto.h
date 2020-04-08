/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** All my proto
*/

#include "my.h"
#include "printlib.h"
#include "linklib.h"
#include "link_struct.h"

#include <stdlib.h>
#include <stdio.h>

#ifndef PSU_MINISHELL2_2019_PROTO_H
#define PSU_MINISHELL2_2019_PROTO_H

//env_manager.c
list_t cp_env(char** env);
void my_sh(list_t env);

#endif //PSU_MINISHELL2_2019_PROTO_H
