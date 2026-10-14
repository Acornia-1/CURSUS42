/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acornia <acornia@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:49:04 by acornia           #+#    #+#             */
/*   Updated: 2026/10/14 16:31:12 by acornia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "ft_printf.h"

typedef struct s_flags
{
	int	spec;
	int	width;
	int	left;
	int	zero;
	int	precision;
	int	hash;
	int	space;
	int	plus;
}	t_flags;

int		ft_printf(char const *str, ...);

int		ft_putpadding(char c, int len);

t_flags	ft_init_flags(void);
int		ft_parse_flags(const char *str, int *i, t_flags *flags);

int		ft_print_char(char c, t_flags flags);
int		ft_print_str(char *str, t_flags flags);
int		ft_print_ptr(void *ptr, t_flags flags);
int		ft_print_nbr(int n, t_flags flags);
int		ft_print_unbr(unsigned int n, t_flags flags);
int		ft_print_unbr(unsigned int n, t_flags flags);
int		ft_print_hex(unsigned int n, t_flags flags);

#endif