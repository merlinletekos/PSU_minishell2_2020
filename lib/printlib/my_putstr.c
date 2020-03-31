/*
** EPITECH PROJECT, 2019
** my_putstr.c
** File description:
** Task02 of the day03
*/

#include <stdarg.h>
#include <unistd.h>
#include "../../include/printlib.h"

int my_putchar(char c);

int print_str(va_list list)
{
    return my_putstr(va_arg(list, char *));
}

int my_putstr(char const *str)
{
    int len = my_strlen(str);

    write(1, str, len);
    return len;
}
