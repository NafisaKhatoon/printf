/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_putptr.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakhatoo <nakhatoo@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/01 19:38:10 by nakhatoo      #+#    #+#                 */
/*   Updated: 2026/04/08 18:49:57 by nakhatoo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_putptr(void *ptr)
{
	int				i;
	unsigned long	addr;

	if (!ptr)
		return (ft_printf_putstr("(nil)"));
	i = 0;
	addr = (unsigned long)ptr;
	i += ft_printf_putstr("0x");
	i += ft_printf_hex(addr, 0);
	return (i);
}
