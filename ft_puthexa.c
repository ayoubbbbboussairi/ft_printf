
#include "ft_printf.h"

int	count_hex(unsigned long  nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		nbr = nbr/16;
		count++;
	}
	return (count);
}
int	ft_puthexa(unsigned long n, char flag)
{
	char	*s;

	if (flag == 'x')
		s = "0123456789abcdef";
	else if (flag == 'X')
		s = "0123456789ABCDEF";
	if (n < 16)
		ft_putchar(s[n]);
	else
	{
		ft_puthexa(n / 16, flag);
		ft_puthexa(n % 16, flag);
	}
	return (count_hex(n));
}
