/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** Converter env
*/

#include "proto.h"

static size_t count_list(list_t env)
{
    size_t count = 0;
    element_t* buffer = env;

    while (buffer != NULL) {
        count++;
        buffer = buffer->next;
    }
    return count;
}

static void fill_word(char* name, char* value, char *result)
{
    size_t k = 0;

    for (; name[k] != '\0'; k++)
        result[k] = name[k];
    result[k + 1] = '=';
    k += 2;
    for (int j = 0; value[j] != '\0'; j++, k++)
        result[k] = value[j];
}

char** convert_env(list_t env)
{
    element_t* buffer = env;
    size_t count = count_list(env);
    char** result = malloc(sizeof(char*) * count + 1);
    size_t size = 0;
    size_t i = 0;

    result[count] = NULL;
    while (buffer != NULL) {
        size = my_strlen(buffer->name) + my_strlen(buffer->value) + 1;
        result[i] = malloc(sizeof(char) * size + 1);
        result[size] = '\0';
        fill_word(buffer->name, buffer->value, result[i]);
        i++;
        buffer = buffer->next;
    }
    return result;
}
