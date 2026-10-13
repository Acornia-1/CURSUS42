/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acornia <acornia@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:50:27 by acornia           #+#    #+#             */
/*   Updated: 2026/10/13 16:37:54 by acornia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h> //malloc
# include <unistd.h> //write
# include <stdarg.h> //va_start, va_arg, va_copy, va_end

int	ft_putchar_pf(char c);
int	ft_putstr_pf(const char *str);
int	ft_putnbr_pf(int n);
int	ft_putunbr_pf(unsigned int n);
int	ft_puthex_pf(unsigned int n, char format);
int	ft_putptr_pf(void *ptr);

#endif