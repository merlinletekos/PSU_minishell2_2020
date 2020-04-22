/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** All struct
*/
#ifndef PSU_MINISHELL2_2019_STRUCT_H
#define PSU_MINISHELL2_2019_STRUCT_H

typedef struct builtins
{
    char* name;
    list_t (*function)(int ac, char** av, list_t env);
} builtins_t;

#endif //PSU_MINISHELL2_2019_STRUCT_H
