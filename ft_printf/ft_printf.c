/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acornia <acornia@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:05:07 by acornia           #+#    #+#             */
/*   Updated: 2026/10/13 16:41:37 by acornia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <limits.h>
#include <stdio.h>

int main()
{
	int		n = 42;
	char	*str = "Hola 42";

	printf("%p\n", &n);
	printf("%p\n", str);
	ft_putptr_pf(&n);
	printf("\n");
	ft_putptr_pf(str);
}