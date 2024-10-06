#include <string.h>

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