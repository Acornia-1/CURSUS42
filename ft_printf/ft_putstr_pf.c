/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acornia <acornia@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:16:00 by acornia           #+#    #+#             */
/*   Updated: 2026/10/13 16:13:14 by acornia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_pf(const char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count += ft_putchar_pf(*str);
		str++;
	}
	return (count);
}
