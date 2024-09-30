#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int iterative_factorial(int nb)
{
    int result = nb;
    if (nb == 0 || nb == 1)
    {
        return 1;
    }
    for (int i = nb - 1; i > 1; i--)
    {
        result *= i;
    }

    return result;
}

int recursive_power(int nb, int p)
{
    if (p == 0 && nb == 0)
    {
        return 0;
    }
    else if (p == 0)
    {
        return 1;
    }
    else if (p == 1)
    {
        return nb;
    }
    else
    {
        return nb * recursive_power(nb, p - 1);
    }
}

int is_prime_number(int nb)
{
    int diviser = 1;
    if (nb == 0 || nb == 1)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i <= nb; i++)
        {
            if (nb % i == 0)
            {
                diviser += 1;
            }
        }
        if (diviser <= 2)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

char *my_strcpy(char *dest, char const *src)
{
    dest = malloc(strlen(src) + 1);
    if (dest == NULL)
    {
        return NULL;
    }

    for (int i = 0; i < strlen(src); i++)
        dest[i] = src[i];

    dest[strlen(src)] = '\0';
    return dest;
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    if (s1 == NULL || s2 == NULL)
    {
        return (s1 == s2) ? 0 : (s1 == NULL) ? -1
                                             : 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == '\0' || s2[i] == '\0')
        {
            return (s1 == s2) ? 0 : (s1 == NULL) ? -1
                                                 : 1;
        }
        if (s1[i] > s2[i])
        {
            return 1;
        }
        else if (s1[i] < s2[i])
        {
            return -1;
        }
    }
    return 0;
}

char *my_strstr(char *str, char const *to_find)
{
    if (str == "" || to_find == "")
    {
        return NULL;
    }
    int i = 0, j = 0;
    while (i < strlen(str))
    {
        if (str[i] == to_find[j])
        {
            j++;
            if (to_find[j] == '\0')
            {
                return &str[i - j + 1];
            }
        }
        else
        {
            j = 0;
        }
        i++;
    };
}

char *my_strupcase(char *str)
{
    char *new_str = malloc(strlen(str) + 1);
    if (str == "")
    {
        return NULL;
    }

    for (int i = 0; i < strlen(str); i++)
    {
        new_str[i] = toupper(str[i]);
    }

    new_str[strlen(str)] = '\0';

    return new_str;
}

char *my_strcapitalize(char *str)
{
    const char *delimiter = " ";
    int i = 0;
    char *token;
    char *str_copy = strdup(str);
    char *result = malloc(strlen(str) + 1);
    result[0] = '\0';
    char *context;

    if (str_copy == NULL)
    {
        return NULL;
    }

    token = strtok_s(str_copy, delimiter, &context);

    while (token != NULL)
    {
        int capitalize_next = 0;

        for (int i = 0; i < strlen(token); i++)
        {
            if (isalpha(token[i]) && !capitalize_next)
            {
                token[i] = toupper((unsigned char)token[i]);
                capitalize_next = 1;
            }
            else if (token[i] == '-' || token[i] == '+')
            {
                capitalize_next = 0;
            }
        }
        strcat(result, token);
        strcat(result, " ");

        printf("%s\n", result);
        token = strtok_s(NULL, delimiter, &context);
    }

    free(str_copy);

    return NULL;
}

int main()
{
    char *result = my_strcapitalize("hey, how are you? 42WORds forty-two; fifty+one");
    printf("%s", result);
    return 0;
}