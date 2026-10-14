/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acornia <acornia@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:27:45 by acornia           #+#    #+#             */
/*   Updated: 2026/10/14 14:46:08 by acornia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putptr_hex(unsigned long n);

int	ft_putptr(void *ptr)
{
	unsigned long	addres;
	int				count;

	if (!ptr)
		return (ft_putstr("(nil)"));
	count = 0;
	addres = (unsigned long)ptr;
	count += ft_putstr("0x");
	count += ft_putptr_hex(addres);
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
	count += ft_putchar(base[n % 16]);
	return (count);
}
