/*
** EPITECH PROJECT, 2019
** my_strcat.c
** File description:
** Return concatenates str
*/

#include "../../include/my.h"
#include <stdlib.h>

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int size = get_len(dest) + get_len(src);
    char* result = malloc(sizeof(char) * size + 1);

    result[size] = '\0';
    for (; dest[i] != '\0'; i++)
        result[i] = dest[i];
    for (int j = 0; src[j] != 0; i++, j++)
        result[i] = src[j];
    return result;
}
