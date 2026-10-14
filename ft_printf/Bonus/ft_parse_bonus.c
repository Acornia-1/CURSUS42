/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acornia <acornia@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:03:28 by acornia           #+#    #+#             */
/*   Updated: 2026/10/14 16:04:06 by acornia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

t_flags	ft_init_flags(void)
{
	t_flags	flags;

	flags.spec = 0;
	flags.width = 0;
	flags.left = 0;
	flags.zero = 0;
	flags.precision = -1;
	flags.hash = 0;
	flags.space = 0;
	flags.plus = 0;
	return (flags);
}

int	ft_parse_flags(const char *str, int *i, t_flags *flags)
{
	*flags = ft_init_flags();
	while (str[*i] && (str[*i] == '-' || str[*i] == '0' || str[*i] == '#'
			|| str[*i] == ' ' || str[*i] == '+'))
	{
		if (str[*i] == '-')
			flags->left = 1;
		else if (str[*i] == '0')
			flags->zero = 1;
		else if (str[*i] == '#')
			flags->hash = 1;
		else if (str[*i] == ' ')
			flags->space = 1;
		else if (str[*i] == '+')
			flags->plus = 1;
		(*i)++;
	}
	return (1);
}
