/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** Count array item
*/

#include <stdlib.h>

int count_array(char **array)
{
    int i = 0;

    for (; array[i] != NULL; i++);
    return i;
}
