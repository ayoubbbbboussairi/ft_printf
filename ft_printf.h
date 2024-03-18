
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *forma, ...);

int	ft_check(char forma, va_list ptr);

int	ft_putstr(char *s);

int	ft_putchar(char c);

int	ft_putnbr(int nb);

int	ft_putunsnbr(unsigned int nbr);

int	ft_puthexa(unsigned long n, char flag);

int	ft_putadd(unsigned long n);

#endif
