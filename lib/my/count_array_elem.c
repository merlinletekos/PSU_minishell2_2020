/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** Count array item
*/

#include <stdlib.h>

int count_array(char **array)
{
    int count = 0;
    while (array[count] != NULL) {
        count++;
    }
    return count;
}
