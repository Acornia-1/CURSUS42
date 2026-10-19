/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acornia <acornia@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 11:06:33 by acornia           #+#    #+#             */
/*   Updated: 2026/10/19 12:24:06 by acornia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *str, int c)
{
	if (!str)
		return (NULL);
	while (*str != (char)c)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return ((char *)str);
}

static char	*ft_init_str1(void)
{
	char	*str1;

	str1 = (char *)malloc(sizeof(char));
	if (!str1)
		return (NULL);
	str1[0] = '\0';
	return (str1);
}

static void	ft_strcpy_all(char *dest, const char *str1, const char *str2)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (str1[i] != '\0')
	{
		dest[i] = str1[i];
		i++;
	}
	j = 0;
	while (str2[j] != '\0')
	{
		dest[i + j] = str2[j];
		j++;
	}
	dest[i + j] = '\0';
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;

	if (!s1)
		s1 = ft_init_str1();
	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
	{
		free(s1);
		return (NULL);
	}
	ft_strcpy_all(str, s1, s2);
	free(s1);
	return (str);
}
