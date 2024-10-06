#include <string.h>
#include "libphoenix.h"

int show_string(char const *str)
{
    int count = 0;

    if (str == NULL)
    { 
        return 0;
    }

    
    while (str[count] != '\0')
    {
        my_putchar(str[count]); 
        count++;               
    }

    return count;
}