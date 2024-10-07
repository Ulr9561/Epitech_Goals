#include <stdlib.h>
#include "libphoenix.h"

int main(int ac, char **av)
{
    char *str = concat_parameters(ac, av);
    show_string(str);
    free(str);
    return (EXIT_SUCCESS);
}