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
    char* name;
    char* value;
    struct element *next;
} element_t;

typedef element_t* list_t;

#endif /* !LINK_STRUCT_H_ */
