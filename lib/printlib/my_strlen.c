/*
** EPITECH PROJECT, 2019
** my_strlen.c
** File description:
** Task03 of the day04
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}
