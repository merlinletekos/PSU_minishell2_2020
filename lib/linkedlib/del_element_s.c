/*
** EPITECH PROJECT, 2020
** my_libs2
** File description:
** del_element_s
*/

#include <stdlib.h>

#include "../../include/link_struct.h"
#include "../../include/linklib.h"

void del_element_s(link_l list)
{
    element_t *buffer;

    if (is_empty_l(list))
        return NULL;
    buffer = list->next;
    free(list);
    return buffer;
}