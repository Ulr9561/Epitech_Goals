#include <stdio.h>

void tree(int size)
{
    int totalWidth = 2 * (3 + size) + (size * size);
    int width;

    for (int n = 0; n < size; n++)
    {
        int height = n + 4;

        if (n == 0)
        {
            width = 1;
        }
        else if (n == 1)
        {
            width = size;
        }
        else if (n == size - 1){
            width = size * size;
        }
        else
        {
            width = size * n;
            if (width % 2 == 0)
            {
                width += 1;
            }
            else
            {
                width += 2;
            }
        }

        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < (totalWidth - width) / 2; j++)
            {
                printf(" ");
            }
            for (int j = 0; j < width; j++)
            {
                printf("*");
            }

            printf("\n");
            width += 2;
        }
    }

    int trunkHeight = size;
    int trunkWidth = size % 2 == 0 ? size + 1 : size;

    for (int i = 0; i < trunkHeight; i++)
    {
        for (int j = 0; j < (totalWidth - trunkWidth) / 2; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < trunkWidth; j++)
        {
            printf("|");
        }
        printf("\n");       
    }
}

int main()
{
    int size = 2;
    tree(size);
    return 0;
}
