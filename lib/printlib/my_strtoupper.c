/*
** EPITECH PROJECT, 2019
** my_str_to_upper.c
** File description:
** my_str_to_upper
*/

#include <stdlib.h>

char *my_strtoupper(char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
    return str;
}