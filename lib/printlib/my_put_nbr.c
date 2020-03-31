/*
** EPITECH PROJECT, 2019
** my_put_nbr.c
** File description:
** Put nbr
*/

#include <stdarg.h>
#include "../../include/printlib.h"

int my_putchar(char c);

int print_int(va_list list)
{
    return my_put_nbr(va_arg(list, int));
}

int print_unint(va_list list)
{
    int nbr = va_arg(list, int);
    unsigned int unint = nbr;

    if (my_isneg(nbr))
        unint = -nbr;
    return my_put_nbr(unint);
}

int my_put_nbr(int nb)
{
    int a = 1;
    int i = 0;

    if (nb == 0)
        my_putchar('0');
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    while (nb / a > 0)
        a *= 10;
    a /= 10;
    while (a > 0) {
        my_putchar(nb / a % 10 + 48);
        a /= 10;
        i++;
    }
    return i;
}
