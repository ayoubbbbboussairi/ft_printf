
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ptr;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(ptr, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				break ;
			count += ft_check(format[i], ptr);
		}
		else
			count += write (1, &format[i], 1);
		i++;
	}
	va_end(ptr);
	return (count);
}

// int main()
// {
// 	char str[] = "hello";
// 	int a = 5;
// 	char c = 'a';
// 	int *ptr =&a ;
// 	unsigned long h = 16;
// 	unsigned int i = 255;

// 	ft_printf("%d \n",a);
// 	printf("%d\n" ,a);
// 	ft_printf("%c\n",c);
// 	printf("%c\n",c);
// 	ft_printf("%s\n",str);
// 	printf("%s\n",str);
// 	ft_printf("%p\n",ptr);
// 	printf("%p\n",ptr);
// 	ft_printf("%x\n",h);
// 	printf("%x\n",h);
// 	ft_printf("acacacaca%%\n");
// 	printf("acacacaca%%\n");
// 	ft_printf("i = %u\n",i);
// 	printf("%u\n",i);
// 	ft_printf("bonjour\n");
// 	printf("bonjour\n");
// }