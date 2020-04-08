/*
** EPITECH PROJECT, 2020
** my_libs
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_is_prime(int nb);
int my_showmem(char const *str);
int my_showstr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *str, char const *to_find);
char *my_strcpy(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int n);
int my_strncmp(char const *str1, char const *str2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
void my_swap(int *a, int *b);
int get_len(char const *str);
char* prv_strparser(char *str, char delim);
char* my_strparser(char const *str, char delim);

#endif /* !MY_H_ */
