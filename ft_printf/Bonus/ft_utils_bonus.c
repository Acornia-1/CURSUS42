/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acornia <acornia@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:32:20 by acornia           #+#    #+#             */
/*   Updated: 2026/10/14 15:58:34 by acornia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_putpadding(char c, int len)
{
	int	count;

	count = 0;
	while (len > 0)
	{
		count += ft_putchar(c);
		len--;
	}
	return (count);
}
