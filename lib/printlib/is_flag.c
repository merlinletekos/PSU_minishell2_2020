/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** is_flag.c
*/

#include "../../include/print_struct.h"

flag_help_t flags_h[] = {
    {1, 'h'},
    {2, 'c'}
};

int get_flag_h(int id)
{
    int i = 0;

    while (flags_h[i].id) {
        if (flags_h[i].id == id)
            return i;
    }
    return -1;
}

int is_flag(char *param, int id)
{
    int flag = get_flag_h(id);

    if (flag > 0)
        return 0;
    else if (param[1] == flags_h[flag].flag)
        return 1;
    else
        return 0;
}
