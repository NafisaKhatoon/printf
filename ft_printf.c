/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakhatoo <nakhatoo@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/01 19:34:02 by nakhatoo      #+#    #+#                 */
/*   Updated: 2026/04/16 18:22:05 by nakhatoo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_format(va_list *args, char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_printf_putchar(va_arg(*args, int));
	else if (c == 's')
		len += ft_printf_putstr(va_arg(*args, char *));
	else if (c == 'p')
		len += ft_printf_putptr(va_arg(*args, void *));
	else if (c == 'd' || c == 'i')
		len += ft_printf_putnbr(va_arg(*args, int));
	else if (c == 'u')
		len += ft_printf_unsigned(va_arg(*args, unsigned int));
	else if (c == 'x')
		len += ft_printf_hex(va_arg(*args, unsigned int), 0);
	else if (c == 'X')
		len += ft_printf_hex(va_arg(*args, unsigned int), 1);
	else if (c == '%')
		len += ft_printf_putchar('%');
	else if (c == 'a')
		len += ft_printf_putstr("my awsome world");
	return (len);

}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;
	int		i;

	va_start (args, str);
	len = 0;
	i = 0;
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%')
			len += ft_format(&args, str[++i]);
		else
			len += ft_printf_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}

#include <stdio.h>

int main(void)
{
	int count1, count2;
	count1= ft_printf("%v\n");
	count2= printf("%v\n");
	printf("%d\t %d",count1,count2);
	
}
