/*
** EPITECH PROJECT, 2019
** my_str_to_word_array
** File description:
** str to word
*/

#include <stdlib.h>
#include <stdbool.h>
#include "../../include/my.h"

static int count_word(char const* str)
{
    int count = 0;

    for (int i = 0; str[i] != '\n' && str[i] != '\0'; i++) {
        if (str[i] == '"')
            for (i++; str[i] != '"' && str[i] != '\n' && str[i] != '\0'; i++);
        else if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
            count++;
    }
    count++;
    return count;
}

static int get_word_size(char const* str, int i)
{
    int wc = 0;

    if (str[i] == '"')
        for (i++; str[i] != '"' && str[i] != '\n' && str[i] != '\0'; i++, wc++);
    else
        for (i++; str[i] != ' ' && str[i] != '\n' && str[i] != '\0'; i++, wc++);
    return (wc);
}

static int fill_word(const char* str, int i, char* word)
{
    if (str[i] == '\\' && str[i + 1] == '0') {
        word[0] = '0';
        return i + 2;
    }
    if (str[i] == '"') {
        i++;
        for (int j = 0; str[i] != '"' && str[i] != '\n' &&
                        str[i] != '\0'; i++, j++)
            word[j] = str[i];
    }
    else {
        for (int j = 0; str[i] != ' ' && str[i] != '\n' &&
                        str[i] != '\0'; i++, j++)
            word[j] = str[i];
    }
    return i;
}

char** str_to_word_array(char const* str)
{
    int word = 0;
    int word_count = count_word(str);
    char** result = malloc(sizeof(char*) * word_count + 2);

    if (result == NULL)
        return NULL;
    result[word_count] = NULL;
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++, word++) {
        result[word] = malloc(sizeof(char) * get_word_size(str, i) + 2);
        if (result[word] == NULL)
            return NULL;
        result[word][get_word_size(str, i)] = '\0';
        i = fill_word(str, i, result[word]);
    }
    return result;
}