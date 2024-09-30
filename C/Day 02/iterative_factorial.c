#include <stdio.h>
#include <stdlib.h>
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
        return (s1 == s2) ? 0 : (s1 == NULL) ? -1 : 1;
    }
    for (int i = 0; i < n; i++)
    {
        if(s1[i] == '\0' || s2[i] == '\0') {
            
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

int main()
{
    char *dest = NULL;
    dest = my_strcpy(dest, "Alloah");
    if (dest != NULL)
    {
        printf("%s", dest);
        free(dest);
    }
    else
    {
        printf("Error");
    }
    return 0;
}