#include "libft.h"

void	ft_putstring(char *str)

{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}