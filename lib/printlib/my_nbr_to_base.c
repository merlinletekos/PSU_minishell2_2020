/*
** EPITECH PROJECT, 2019
** my_nbr_to_bin.c
** File description:
** Convert nbr into an binaire
*/

#include <stdarg.h>
#include "../../include/printlib.h"

char *my_nbr_to_base(long long nbr, char *base)
{
    int i = 0;
    char result[2048];
    int base_size = my_strlen(base);

    while (nbr > 0) {
        result[i] = base[nbr % base_size];
        nbr /= base_size;
        i++;
    }
    result[i] = '\0';
    return my_revstr(result);
}

int print_bin(va_list list)
{
    char *result = my_nbr_to_base(va_arg(list, int), "01");

    return my_putstr(result);
}

int print_oct(va_list list)
{
    char *result = my_nbr_to_base(va_arg(list, int), "01234567");

    return my_putstr(result);
}

int print_hexa_lo(va_list list)
{
    char *result = my_nbr_to_base(va_arg(list, int), "0123456789abcdef");

    return my_putstr(result);
}

int print_hexa_up(va_list list)
{
    char *result = my_nbr_to_base(va_arg(list, int), "0123456789ABCDEF");

    return my_putstr(result);
}
