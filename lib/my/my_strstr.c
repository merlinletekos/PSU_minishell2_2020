/*
** EPITECH PROJECT, 2019
** my_strstr.c
** File description:
** find string
*/

#include <stdlib.h>
#include "../../include/my.h"

static bool check_word(int i, char* str, const char* to_find)
{
    int y = 0;
    int count = 0;

    while(to_find[y] != '\0') {
        if (str[i + y] == to_find[y] && str[i + y] != '\0')
            count++;
        y++;
    }
    return count == get_len(to_find) ? true : false;
}

bool my_strstr(char *str, char const *to_find)
{
    int i = 0;
    bool checked = false;

    if (str == NULL || to_find == NULL)
        return false;
    while (str[i] != '\0') {
        if (str[i] == to_find[0] && !checked)
            checked = check_word(i, str, to_find);
        if (checked)
            return true;
        i++;
    }
    return false;
}
