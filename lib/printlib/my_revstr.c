/*
** EPITECH PROJECT, 2019
** my_putstr.c
** File description:
** Task02 of the day03
*/

#include <stdlib.h>
#include "../../include/printlib.h"

char *my_revstr(char const *str)
{
    int i = 1;
    int length = my_strlen(str);
    char *result = malloc(sizeof(char) * length + 1);

    while (i <= length) {
        result[i - 1] = str[length - i];
        i++;
    }
    result[i - 1] = '\0';
    return result;
}
