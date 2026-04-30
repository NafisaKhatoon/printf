/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_putnbr.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakhatoo <nakhatoo@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/01 19:37:32 by nakhatoo      #+#    #+#                 */
/*   Updated: 2026/04/01 19:37:41 by nakhatoo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printf_putnbr(int n)
{
	size_t	i;
	long	nb;
	char	c;

	i = 0;
	nb = n;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		i++;
	}
	if (nb >= 10)
	{
		i = i + ft_printf_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		c = (char)(nb + 48);
		write (1, &c, 1);
		i++;
	}
	return (i);
}
