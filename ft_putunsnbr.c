
#include "ft_printf.h"

int	count_unsnbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n = n/10;
		count++;
	}
	return (count);
}

int	ft_putunsnbr(unsigned int nbr)
{
	if (nbr < 10)
		ft_putchar(nbr + '0');
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	return (count_unsnbr(nbr));
}