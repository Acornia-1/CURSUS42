/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acornia <acornia@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:22:14 by acornia           #+#    #+#             */
/*   Updated: 2026/10/13 16:25:12 by acornia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pf(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		ft_putstr_pf("-2147483648");
		return (11);
	}
	if (n < 0)
	{
		count += ft_putchar_pf('-');
		n = -n;
	}
	if (n > 9)
		count += ft_putnbr_pf(n / 10);
	count += ft_putchar_pf((n % 10) + '0');
	return (count);
}

int	ft_putunbr_pf(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
		count += ft_putunbr_pf(n / 10);
	count += ft_putchar_pf((n % 10) + '0');
	return (count);
}
