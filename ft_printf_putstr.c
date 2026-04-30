/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_putstr.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakhatoo <nakhatoo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/02 11:40:52 by nakhatoo      #+#    #+#                 */
/*   Updated: 2026/04/02 11:41:00 by nakhatoo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printf_putstr(const char *s)
{
	size_t	i;

	if (!s)
	{
		write (1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (s[i])
	{
		write (1, &s[i], 1);
		i++;
	}
	return (i);
}
