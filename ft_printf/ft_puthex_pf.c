/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acornia <acornia@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:45:04 by acornia           #+#    #+#             */
/*   Updated: 2026/10/13 16:44:08 by acornia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_pf(unsigned int n, char format)
{
	char	*base;
	int		count;

	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	count = 0;
	if (n >= 16)
		count += ft_puthex_pf(n / 16, format);
	count += ft_putchar_pf(base[n % 16]);
	return (count);
}
