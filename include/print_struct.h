/*
** EPITECH PROJECT, 2020
** my_libs
** File description:
** print_struct
*/

#ifndef PRINT_STRUCT_H_
#define PRINT_STRUCT_H_

#include <stdarg.h>

struct flag
{
    char flag;
    int (*function)(va_list list);
};

typedef struct flag_help
{
    int id;
    char flag;
} flag_help_t;

#endif /* !PRINT_STRUCT_H_ */
