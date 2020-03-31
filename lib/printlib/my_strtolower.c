/*
** EPITECH PROJECT, 2019
** my_str_to_lower.c
** File description:
** my_strtolower
*/

#include <stdlib.h>

char *my_strtolower(char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    return str;
}