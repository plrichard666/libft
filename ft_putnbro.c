#include "libft.h"

void ft_putnbro(size_t num, size_t base_len, char *base)
{
    char c;

    if(num >= base_len)
        ft_putnbro(num / base_len,  base_len, base);
    c = base[(num % base_len)];
    write(1, &c, 1);
}