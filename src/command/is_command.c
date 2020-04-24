/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** check valid command
*/

#include "proto.h"

int is_command(char** av, char* path)
{
    char** arr_path = path_to_word_array(path);
    char* buff = NULL;

    for (int i = 0; arr_path[i] != NULL; i++) {
        buff = my_strcat(my_strcat(arr_path[i], "/"), av[0]);
        if (access(buff, F_OK) != -1) {
            free(buff);
            return 1;
        }
    }
    free(buff);
    return 0;
}