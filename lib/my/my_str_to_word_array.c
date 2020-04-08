/*
** EPITECH PROJECT, 2019
** my_str_to_word_array
** File description:
** str to word
*/

#include <stdlib.h>
#include "../../include/my.h"

static int total_words(char const* str)
{
    int word_count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] != '\0')
            word_count++;
    }
    return word_count;
}

static int word_size(char const *str, int i)
{
    int word_s = 0;

    for (; str[i] != ' ' && str[i] != '\n' && str[i] != '\0'; i++, word_s++);
    return word_s;
}

char **str_to_word_array(char const *str)
{
    int word_c = 0;
    char **words = malloc(sizeof(char*) * total_words(str));

    for (int i = 0; str[i] != '\0'; i++, word_c++) {
        words[word_c] = malloc(sizeof(char) * word_size(str, i) + 1);
        words[word_c][word_size(str, i)] = '\0';
        for (int j = 0; str[i] != ' ' && str[i] != '\n' &&
        str[i] != '\0'; i++, j++) {
            words[word_c][j] = str[i];
        }
        if (!str[i])
            return words;
    }
    return words;
}