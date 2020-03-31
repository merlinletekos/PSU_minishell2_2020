/*
** EPITECH PROJECT, 2019
** my_getnbr.c
** File description:
** Convert a string nbr into an integer
*/

int frt_nbr_pos(char const *str)
{
    int i = 0;

    while (str[i] < '0' || str[i] > '9')
        i++;
    return i;
}

int my_getnbr(char const *str)
{
    int nbr = 0;
    int nbr_pos = frt_nbr_pos(str);

    for (int i = 0; str[i]; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            nbr += str[i] - 48;
            nbr *= 10;
        }
    }
    nbr /= 10;
    if (str[nbr_pos - 1] == '-')
        return -nbr;
    if (!(str[nbr_pos - 1] == '-'))
        return nbr;
    return 0;
}
