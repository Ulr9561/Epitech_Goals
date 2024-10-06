#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int to_number(char const *str)
{
    long long result = 0;
    int sign = 1;
    int i = 0;
    bool isfound = false;
    while (str[i] != '\0' && isspace(str[i]))
    {
        i++;
    }
    while (str[i] != '\0')
    {
        if (str[i] == '+' || str[i] == '-')
        {
            if (isfound)
            {
                break;
            }
            else if (str[i] == '-')
            {
                sign = -sign;
            }
        }
        else if (isdigit(str[i]))
        {
            isfound = true;
            result = result * 10 + (str[i] - '0');
        }
        else if (isspace(str[i]))
        {
            if (isfound)
            {
                break;
            }
        }
        else
        {
            break;
        }

        i++;
    }

    result = result * sign;
    if (result > INT_MAX || result < INT_MIN)
    {
        return 0;
    }

    return (int)result;
};