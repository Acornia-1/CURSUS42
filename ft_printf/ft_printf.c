/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acornia <acornia@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:05:07 by acornia           #+#    #+#             */
/*   Updated: 2026/10/15 10:19:06 by acornia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list args, char spec);

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		count;
	int		i;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			count += ft_format(args, str[i]);
		}
		else
			count += ft_putchar(str[i]);
		if (str[i] != '\0')
			i++;
	}
	va_end(args);
	return (count);
}

static int	ft_format(va_list args, char spec)
{
	int	count;

	count = 0;
	if (spec == 'c')
		count += ft_putchar(va_arg(args, int));
	if (spec == 's')
		count += ft_putstr(va_arg(args, char *));
	if (spec == 'p')
		count += ft_putptr(va_arg(args, void *));
	if (spec == 'd' || spec == 'i')
		count += ft_putnbr(va_arg(args, int));
	if (spec == 'u')
		count += ft_putunbr(va_arg(args, unsigned int));
	if (spec == 'x' || spec == 'X')
		count += ft_puthex(va_arg(args, unsigned int), spec);
	if (spec == '%')
		count += ft_putchar('%');
	return (count);
}
