
#include "ft_printf.h"

int	count_n(int n)
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

int	ft_putnbr(int nb)
{
	long	n;
	int		i;

	n = nb;
	i = 0;
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
		i++;
	}
	if (n < 10)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	return (count_n(n) + i);
}
