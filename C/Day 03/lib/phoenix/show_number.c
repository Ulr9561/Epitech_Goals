#include "libphoenix.h"

int show_number(int nb)
{
    if (nb < 0)
    {
        my_putchar('-');
        nb = -nb;
    }
    if (nb >= 10)
    {
        show_number(nb / 10);
    }
    my_putchar((nb % 10) + '0');
    return 0;
}