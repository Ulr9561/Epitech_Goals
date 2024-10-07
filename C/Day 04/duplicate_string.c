#include "libphoenix.h"
#include <string.h>

char *duplicate_string(char const *src) {
    char *result = malloc(strlen(src) + 1);
    if(result == NULL) {
        return NULL;
    }
    my_strcpy(result, src);
    return result;
}