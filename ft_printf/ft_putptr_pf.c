/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acornia <acornia@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:27:45 by acornia           #+#    #+#             */
/*   Updated: 2026/10/13 16:42:59 by acornia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putptr_hex(unsigned long n);

int	ft_putptr_pf(void *ptr)
{
	unsigned long	n;
	int				count;

	if (!ptr)
		return (ft_putstr_pf("nil"));
	count = 0;
	n = (unsigned long)ptr;
	count += ft_putstr_pf("0x");
	count += ft_putptr_hex(n);
	return (count);
}

static int	ft_putptr_hex(unsigned long n)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (n >= 16)
		count += ft_putptr_hex(n / 16);
	count += ft_putchar_pf(base[n % 16]);
	return (count);
}