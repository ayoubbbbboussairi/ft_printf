
#include "ft_printf.h"

int	ft_putadd(unsigned long n)
{
	write(1, "0x", 2);
	return (ft_puthexa(n, 'x') + 2);
}
