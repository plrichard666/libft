#include "libft.h"

void	ft_putchar(char c);

void	ft_putnbro_rtn_neg(int nb, int *sum)
{
	long n;
    
    n = nb;
	if (n < 0 )
	{
		ft_putcharo_rtn('-', sum);
		ft_putnbro_rtn_neg(-n, sum);
	}
	else if (n > 9)
	{
		ft_putnbro_rtn_neg(n / 10, sum);
		ft_putnbro_rtn_neg(n % 10, sum);
	}
	else
		ft_putcharo_rtn(n + '0', sum);
}

void	ft_putcharo_rtn(char c, int *sum)
{
	write(1, &c, 1);
    (*sum)++;
}
