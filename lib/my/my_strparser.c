/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_strparser
*/

#include <stdlib.h>
#include "../../include/my.h"

char *prv_strparser(char *str, char delim)
{
    size_t len = 0;
    char *result;

    while (str[len] != delim)
        len++;
    result = malloc(sizeof(char) * len + 1);
    for (size_t i = 0; i < len; i++)
        result[i] = str[i];
    result[len] = '\0';
    return result;
}

char *my_strparser(char const *str, char delim)
{
    int size = 0;
    int i = 0;
    char *result;

    for (; str[i] != delim; i++);
    size = get_len(str) - i;
    i++;
    result = malloc(sizeof(char) * size + 1);
    for (int j = 0; str[i + j]; j++) {
        result[j] = str[i + j];
    }
    result[size] = '\0';
    return result;
}