/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakhatoo <nakhatoo@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/31 17:02:08 by nakhatoo      #+#    #+#                 */
/*   Updated: 2026/04/02 18:43:01 by nakhatoo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_printf_putchar(int c);
size_t	ft_printf_putnbr(int n);
size_t	ft_printf_putstr(const char *s);
int		ft_printf_hex(unsigned long n, int uppercase);
int		ft_printf_putptr(void *ptr);
int		ft_printf_unsigned(unsigned int n);

#endif