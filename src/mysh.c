/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** my_sh
*/

#include "proto.h"

builtins_t builtins[] = {
    {"exit", &my_exit},
    {"env", &my_env},
    {"setenv", &my_setenv},
    {"unsetenv", &my_unsetenv},
    {"cd", &my_cd}
};

static list_t command(int ac, char **av, list_t env)
{
    for (size_t i = 0; i < 5; i++) {
        if (my_strcmp(av[0], builtins[i].name)) {
            builtins[i].function(ac, av, env);
            return env;
        }
    }
    if (is_command(av, get_value(env, "PATH"))) {
        my_exe(av, get_value(env, "PATH"), env);
        return env;
    }
    my_printf("%s: Command not found.\n", av[0]);
    return env;
}

static void my_prompt()
{
    char* current_dir = getcwd(NULL, 0);

    my_printf("%s:$ ", current_dir);
}

void my_sh(list_t env)
{
    ssize_t rd = 0;
    size_t size = 0;
    char* buffer = NULL;
    char **av = NULL;

    while (1) {
        my_prompt();
        rd = getline(&buffer, &size, stdin);
        if (rd < 0)
            exit(1);
        if (my_strcmp(buffer, "\n"))
            continue;
        av = str_to_word_array(buffer);
        env = command(count_array(av), av, env);
    }
}
