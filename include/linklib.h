/*
** EPITECH PROJECT, 2020
** my_libs
** File description:
** linklib
*/

#include "link_struct.h"

#ifndef LINKLIB_H_
#define LINKLIB_H_

link_l add_element_s(link_l list, int value);
link_l add_element_e(link_l list, int value);
void print_linkl(link_l list);
int is_empty_l(link_l list);

#endif /* !LINKLIB_H_ */
