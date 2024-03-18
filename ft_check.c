
#include "ft_printf.h"

static int	isin(char format)
{
	int		i;
	char	*isin;

	i = 0;
	isin = "scdiupxX%";
	while (isin[i] != '\0')
	{
		if (isin[i] == (char)format)
			return (1);
		i++;
	}
	return (-1);
}

int	ft_check(char format, va_list ptr)
{
	int i;

	i = 0;
	if ((format) == 's')
		i += ft_putstr(va_arg(ptr, char *));
	if ((format) == 'c')
		i += ft_putchar(va_arg(ptr, int));
	if ((format) == 'd')
		i += ft_putnbr(va_arg(ptr, int));
	if ((format) == 'i')
		i += ft_putnbr(va_arg(ptr, int));
	if ((format) == 'u')
		i += ft_putunsnbr(va_arg(ptr, unsigned int));
	if ((format) == '%')
		i += ft_putchar('%');
	if ((format) == 'p')
		i += ft_putadd(va_arg(ptr, unsigned long));
	if ((format) == 'x' || (format) == 'X')
		i += ft_puthexa(va_arg(ptr, unsigned int), format);
	if (isin(format) == -1)
		i += ft_putchar(format);
	return (i);
}
