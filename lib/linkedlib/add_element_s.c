/*
** EPITECH PROJECT, 2020
** my_libs2
** File description:
** create_element
*/

#include <stdlib.h>

#include "../../include/linklib.h"
#include "../../include/link_struct.h"

link_l add_element_s(link_l list, int value)
{
    element_t *nw_elem = malloc(sizeof(element_t));
    nw_elem->value = value;
    nw_elem->next = list;
    return nw_elem;
}