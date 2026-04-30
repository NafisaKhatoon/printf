/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_hex.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakhatoo <nakhatoo@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/01 19:34:07 by nakhatoo      #+#    #+#                 */
/*   Updated: 2026/04/03 14:39:20 by nakhatoo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hex(unsigned long n, int uppercase)
{
	char	*digits;
	int		i;
	char	c;

	c = 0;
	if (uppercase)
		digits = "0123456789ABCDEF";
	else
		digits = "0123456789abcdef";
	i = 0;
	if (n >= 16)
		i += ft_printf_hex(n / 16, uppercase);
	c = digits[n % 16];
	i += ft_printf_putchar(c);
	return (i);
}
