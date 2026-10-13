/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acornia <acornia@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 10:27:00 by acornia           #+#    #+#             */
/*   Updated: 2026/10/08 12:53:40 by acornia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*str1;
	const unsigned char	*str2;

	if (!dest && !src)
		return (NULL);
	str1 = (unsigned char *)dest;
	str2 = (const unsigned char *)src;
	if (str1 > str2)
	{
		while (n > 0)
		{
			n--;
			str1[n] = str2[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
