/*
** EPITECH PROJECT, 2020
** my_libs2
** File description:
** is_empty_l
*/

#include <stdlib.h>
#include "../../include/link_struct.h"

int is_empty_l(list_t list)
{
    return (list == NULL) ? 1 : 0;
}