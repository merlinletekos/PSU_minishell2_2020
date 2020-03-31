/*
** EPITECH PROJECT, 2019
** my_compute_square_root.c
** File description:
** Task05 of the Day05
*/

int my_compute_square_root(int nb)
{
    for (int i = 0; i < nb / 2; i++) {
        if ((i * i) == nb)
            return i;
    }
    return 0;
}
