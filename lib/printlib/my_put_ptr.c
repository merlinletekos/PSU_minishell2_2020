/*
** EPITECH PROJECT, 2019
** my_put_ptr.c
** File description:
** my_put_ptr
*/

#include <stdarg.h>
#include "../../include/printlib.h"

int print_ptr(va_list list)
{
    return my_put_ptr(va_arg(list, void*));
}

int my_put_ptr(void* nbr)
{
    int count = 0;

    count += my_putstr("0x");
    count += my_putstr(my_nbr_to_base((long long int)nbr, "0123456789abcedf"));
    return count;
}