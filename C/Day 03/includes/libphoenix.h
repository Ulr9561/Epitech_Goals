#ifndef LIBPHOENIX_H
#define LIBPHOENIX_H

#include <stdlib.h>

void my_putchar(char c);
char *concat_strings(char *dest, char const *src);
int show_number(int nb);
int show_string(char const *str);
char *reverse_string(char *str);
int to_number(char const *str);
int is_prime_number(int nb);
char *my_strcpy(char *dest, char const *src);
int my_strncmp(char const *s1, char const *s2, size_t n);
char *my_strstr(char *str, char const *to_find);

#endif // LIBPHOENIX_H