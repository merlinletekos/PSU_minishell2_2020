/*
** EPITECH PROJECT, 2020
** my_libs2
** File description:
** create_element
*/

#include <stdlib.h>

#include "../../include/linklib.h"
#include "../../include/link_struct.h"

list_t add_element_s(list_t list, char* name, char* value)
{
    element_t *nw_elem = malloc(sizeof(element_t));
    nw_elem->name = name;
    nw_elem->value = value;
    nw_elem->next = list;
    return nw_elem;
}