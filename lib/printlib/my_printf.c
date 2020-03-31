/*
** EPITECH PROJECT, 2019
** my_printf.c
** File description:
** PSU_my_printf_2019
*/

#include <stdlib.h>
#include <stdarg.h>
#include "../../include/print_struct.h"
#include "../../include/printlib.h"

struct flag flags[] = {
    {'c', &print_char},
    {'s', &print_str},
    {'d', &print_int},
    {'i', &print_int},
    {'u', &print_unint},
    {'b', &print_bin},
    {'o', &print_oct},
    {'x', &print_hexa_lo},
    {'X', &print_hexa_up},
    {'%', &print_modul},
    {'p', &print_ptr}
};

int get_flag(char const c)
{
    int i = 0;

    while (flags[i].flag) {
        if (c == flags[i].flag)
            return i;
        i++;
    }
    return -1;
}

int my_print(char const *str, va_list list, int i)
{
    int func = get_flag(str[i]);
    int count = 0;

    if (func == -1) {
        count += my_putchar('%');
        count += my_putchar(str[i]);
        return count;
    }
    else {
        return flags[func].function(list);
    }
}

int my_printf(char const *str, ...)
{
    va_list list;
    int count_print = 0;

    va_start(list, str);
    for (int i = 0; str[i]; i++) {
        if (str[i] == '%') {
            count_print += my_print(str, list, i + 1);
            i += 1;
        }
        else
            count_print += my_putchar(str[i]);
    }
    va_end(list);
    return count_print;
}