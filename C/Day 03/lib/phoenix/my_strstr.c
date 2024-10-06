#include <string.h>

char *my_strstr(char *str, char const *to_find)
{
    if (strcmp(str, "") == 0 || strcmp(to_find, "") == 0)
    {
        return (char *)str;
    }
    size_t i = 0, j = 0;
    while (str[i] != '\0')
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
    return NULL;
}