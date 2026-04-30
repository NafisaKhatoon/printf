/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_putchar.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakhatoo <nakhatoo@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/01 19:34:31 by nakhatoo      #+#    #+#                 */
/*   Updated: 2026/04/02 11:42:16 by nakhatoo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_putchar(int c)
{
	write (1, &c, 1);
	return (1);
}
