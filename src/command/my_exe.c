/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** my_execute
*/

#include "proto.h"
#include <sys/types.h>
#include <sys/wait.h>

static char* get_cmd_path(char* cmd, char* pathvar)
{
    char** arr_path = path_to_word_array(pathvar);
    char* buff = NULL;

    for (int i = 0; arr_path[i] != NULL; i++) {
        buff = my_strcat(my_strcat(arr_path[i], "/"), cmd);
        if (access(buff, F_OK) != -1) {
            return buff;
        }
    }
    free(buff);
    return NULL;
}

static char** set_arg(char *path, char** av)
{
    int size = count_array(av);
    char** arg = malloc(sizeof(char*) * size + 1);

    arg[size] = NULL;
    arg[0] = path;
    for (int i = 1; i < size; i++)
        arg[i] = av[i];
    return arg;
}

int my_exe(char** av, char* pathvar, list_t env)
{
    char* path = get_cmd_path(av[0], pathvar);
    char** arr_env = convert_env(env);
    char** arg = set_arg(path, av);

    if (fork() == 0)
        execve(arg[0], arg, arr_env);
    wait(NULL);
    free(arr_env);
    return 0;
}