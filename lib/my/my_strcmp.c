/*
** EPITECH PROJECT, 2019
** my_strcmp.c
** File description:
** Task 06 day06
*/

#include "../../include/my.h"

int my_strcmp(char const *str, char const *to_find)
{
    int len = get_len(to_find);

    if (len > get_len(str))
        return 0;
    for (int i = 0; i < len - 1; i++) {
        if (!(str[i] == to_find[i] && str[i + 1] == to_find[i + 1]))
            return 0;
    }
    return 1;
}
