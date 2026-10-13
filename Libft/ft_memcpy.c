/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acornia <acornia@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 13:48:26 by acornia           #+#    #+#             */
/*   Updated: 2026/10/08 12:53:42 by acornia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		*des;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	des = (unsigned char *)dest;
	ptr = (const unsigned char *)src;
	while (i < n)
	{
		des[i] = ptr[i];
		i++;
	}
	return (des);
}
