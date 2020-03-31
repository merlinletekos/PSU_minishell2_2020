/*
** EPITECH PROJECT, 2020
** my_libs2
** File description:
** add_element_e
*/

#include <stdlib.h>

#include "../../include/linklib.h"
#include "../../include/link_struct.h"

link_l add_element_e(link_l list, int value)
{
    element_t *nw_elem = malloc(sizeof(element_t));
    element_t *buffer = list;

    nw_elem->value = value;
    nw_elem->next = NULL;
    if (list == NULL)
        return nw_elem;
    if (!(list == NULL)) {
        while (buffer->next != NULL)
            buffer = buffer->next;
        buffer->next = nw_elem;
        return list;
    }
    return nw_elem;
}