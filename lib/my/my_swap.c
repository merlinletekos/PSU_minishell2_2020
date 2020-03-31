/*
** EPITECH PROJECT, 2019
** my_swap.c
** File description:
** Task01 of the Day04
*/

void my_swap(int *a, int *b)
{
    int buffer;

    buffer = *a;
    *a = *b;
    *b = buffer;
}
