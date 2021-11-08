#include "libft.h"

void ft_putnbro_rtn(size_t num, size_t base_len, char *base, int *sum)
{
    char c;

    if(num >= base_len)
        ft_putnbro_rtn(num / base_len,  base_len, base, sum);
    c = base[(num % base_len)];
    write(1, &c, 1);
	(*sum)++;
}