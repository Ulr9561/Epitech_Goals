#include <stdlib.h>
#include <string.h>

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