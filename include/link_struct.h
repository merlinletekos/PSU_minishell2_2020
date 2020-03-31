/*
** EPITECH PROJECT, 2020
** my_libs
** File description:
** link_struct
*/

#ifndef LINK_STRUCT_H_
#define LINK_STRUCT_H_

typedef struct element
{
    int value;
    struct element *next;
} element_t;

typedef element_t* link_l;

#endif /* !LINK_STRUCT_H_ */
