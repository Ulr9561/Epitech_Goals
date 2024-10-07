#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int compare_strings(const void *a, const void *b)
{
    const char **str_1 = (const char **)a;
    const char **str_2 = (const char **)b;

    return strcmp(*str_1, *str_2);
}

int main(int argc, char *argv[])
{
    qsort(argv, argc, sizeof(char *), compare_strings);

    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    return 0;
}