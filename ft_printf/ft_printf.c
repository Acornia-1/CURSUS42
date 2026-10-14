/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acornia <acornia@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:05:07 by acornia           #+#    #+#             */
/*   Updated: 2026/10/14 10:22:42 by acornia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <limits.h>
#include <stdio.h>

int	ft_printf()

int main()
{
	char *str = "hola";
	ft_putstr("hola\n");
	ft_putchar('\n');
	ft_puthex(255, 'x');
	ft_putchar('\n');
	ft_puthex(255, 'X');
	ft_putchar('\n');
	ft_putnbr(INT_MIN);
	ft_putchar('\n');
	ft_putunbr(UINT_MAX);
	ft_putchar('\n');
	ft_putptr(str);
	printf("\n%p", str);
}