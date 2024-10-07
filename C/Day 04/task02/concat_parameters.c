#include "libphoenix.h"
#include <stdlib.h>
#include <string.h>

char *concat_parameters(int argc, char **argv){
    size_t total = 0;
    for (int i = 0; i < argc; i++){
        total = strlen(argv[i] + 1);
    }

    char *result = malloc(total + 1);
    if(result == NULL) {
        return NULL;
    }

    result[0] = '\0';
    for (int i = 0; i < argc; i++) {
        concat_strings(result, argv[i]);
        concat_strings(result, "\n");
    }

    return result;
}