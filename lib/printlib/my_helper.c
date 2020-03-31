/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** my_helper
*/

#include "../../include/printlib.h"

const char *arg1 = "example";

int print_helper(char *name)
{
    my_printf("USAGE");
    my_printf("\t%s %s\n", name, arg1);
    my_printf("DESCRIPTION");
    my_printf("\t%s\t\tJust a description.", arg1);
    return 0;
}