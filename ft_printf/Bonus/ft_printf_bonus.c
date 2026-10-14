/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acornia <acornia@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:10:33 by acornia           #+#    #+#             */
/*   Updated: 2026/10/14 16:32:40 by acornia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static int	ft_format_bonus(va_list args, t_flags flags);

int	ft_printf(char const *str, ...)
{
	va_list	args;
	t_flags	flags;
	int		i;
	int		count;

	if (!str)
		return (-1);
	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			ft_parse_flags(str, &i, &flags);
			count += ft_format_bonus(args, flags);
		}
		else
			count += ft_putchar(str[i]);
		if (str[i] != '\0')
			i++;
	}
	va_end(args);
	return (count);
}

static int	ft_format_bonus(va_list args, t_flags flags)
{
	int	count;

	count = 0;
	if (flags.spec == 'c')
		count += ft_print_char(va_arg(args, int), flags);
	else if (flags.spec == 's')
		count += ft_print_str(va_arg(args, char *), flags);
	else if (flags.spec == 'p')
		count += ft_print_ptr(va_arg(args, void *), flags);
	else if (flags.spec == 'd' || flags.spec == 'i')
		count += ft_print_nbr(va_arg(args, int), flags);
	else if (flags.spec == 'u')
		count += ft_print_unbr(va_arg(args, unsigned int), flags);
	else if (flags.spec == 'x' || flags.spec == 'X')
		count += ft_print_hex(va_arg(args, unsigned int), flags);
	else if (flags.spec == '%')
		count += ft_print_char('%', flags);
	return (count);
}
