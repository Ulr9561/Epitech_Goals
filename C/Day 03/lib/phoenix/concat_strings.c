#include "libphoenix.h"
#include <stdio.h>
#include <string.h>

char *concat_strings(char *dest, char const *src)
{
    if (my_strncmp(src, "", 1) == 0)
    {
        return (char *)dest;
    }

    if (my_strncmp(dest, "", 1) == 0)
    {
        return my_strcpy(dest, src);
    }

    size_t i = 0, j = strlen(dest);
    for (i = 0; i < strlen(src); i++)
    {
        dest[j + i] = src[i];
    }

    dest[j + i] = '\0';
    return (char *)dest;
}
