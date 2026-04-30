/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_unsigned.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakhatoo <nakhatoo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/02 12:44:00 by nakhatoo      #+#    #+#                 */
/*   Updated: 2026/04/03 15:42:59 by nakhatoo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_unsigned(unsigned int n)
{
	int		i;

	i = 0;
	if (n >= 10)
		i += ft_printf_unsigned(n / 10);
	i += ft_printf_putchar((n % 10) + '0');
	return (i);
}
