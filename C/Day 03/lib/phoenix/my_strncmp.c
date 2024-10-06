#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

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