#include "libft.h"

void ft_putnbro_rtn_pointer(size_t num, size_t base_len, char *base, int *sum)
{
    char c;
    ft_putchar('0');
    ft_putchar('x');
    (*sum)+= 2;
    if(num >= base_len)
        ft_putnbro_rtn(num / base_len,  base_len, base, sum);
    c = base[(num % base_len)];
    write(1, &c, 1);
	(*sum)++;
}