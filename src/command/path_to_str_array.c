/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** Change my path to str array
*/

#include "proto.h"

static int count_word(char const* str)
{
    int count = 0;

    for (int i = 0; str[i] != '\n' && str[i] != '\0'; i++) {
        if (str[i] == ':' || str[i] == '\n' || str[i] == '\0')
            count++;
    }
    count++;
    return count;
}

static int get_word_size(char const* str, int i)
{
    int wc = 0;

    for (i++; str[i] != ':' && str[i] != '\n' && str[i] != '\0'; i++, wc++);
    return (wc);
}

static int fill_word(const char* str, int i, char* word)
{
    for (int j = 0; str[i] != ':' && str[i] != '\n' && str[i] != '\0'; i++, j++)
        word[j] = str[i];
    return i;
}

char** path_to_word_array(char const* str)
{
    int word = 0;
    int word_count = count_word(str);
    char** result = malloc(sizeof(char*) * word_count + 1);

    result[word_count] = NULL;
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++, word++) {
        result[word] = malloc(sizeof(char) * get_word_size(str, i) + 1);
        result[word][get_word_size(str, i)] = '\0';
        i = fill_word(str, i, result[word]);
    }
    return result;
}
