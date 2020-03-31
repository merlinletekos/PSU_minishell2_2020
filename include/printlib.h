/*
** EPITECH PROJECT, 2020
** my_libs
** File description:
** printlib
*/

#ifndef PRINTLIB_H_
#define PRINTLIB_H_

#include "print_struct.h"
#include <stdarg.h>

// My function
int my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int my_put_double(double nb);
char *my_nbr_to_base(long long nbr, char *base);
int my_printf(char const *str, ...);
int my_put_ptr(void* nbr);
char *my_strtoupper(char *str);
char *my_revstr(char const *str);
int my_isneg(int n);
int is_flag(char *param, int id);
int print_helper(char *name);

// Buffer function
int print_char(va_list list);
int print_str(va_list list);
int print_int(va_list list);
int print_bin(va_list list);
int print_oct(va_list list);
int print_hexa_lo(va_list list);
int print_hexa_up(va_list list);
int print_modul(va_list list);
int print_unint(va_list list);
int print_ptr(va_list list);

#endif /* !PRINTLIB_H_ */
