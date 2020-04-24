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
#include "struct.h"

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void my_sh(list_t env);

// env manager
list_t cp_env(char** env);
char* get_value(list_t env, char* name);

// command
int is_command(char** av, char* path);
char** path_to_word_array(char const* str);
char** convert_env(list_t env);
int my_exe(char** av, char* pathvar, list_t env);

// Builtins
list_t my_env(int ac, char** av, list_t env);
list_t my_exit(int ac, char** av, list_t env);
list_t my_setenv(int ac, char** av, list_t env);
list_t my_unsetenv(int ac, char** av, list_t env);
list_t my_cd(int ac, char** av, list_t env);

#endif //PSU_MINISHELL2_2019_PROTO_H
