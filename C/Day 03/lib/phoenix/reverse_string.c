#include <string.h>

char reverse_string(char const *str)
{
    for (int i = strlen(str); i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}