/*
** EPITECH PROJECT, 2019
** my_putchar.c
** File description:
** Function to display any char
*/

#include <unistd.h>
#include <stdarg.h>
#include "../../include/printlib.h"

int my_putchar(char c)
{
    write(1, &c, 1);
    return 1;
}

int print_char(va_list list)
{
    return my_putchar(va_arg(list, int));
}

int print_modul(va_list va_list)
{
    (void) va_list;
    return my_putchar('%');
}