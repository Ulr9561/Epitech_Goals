#include <stdio.h>

int is_prime_number(int nb)
{
    int diviser = 1;
    if (nb == 0 || nb == 1)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i <= nb; i++)
        {
            if (nb % i == 0)
            {
                diviser += 1;
            }
        }
        if (diviser <= 2)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}