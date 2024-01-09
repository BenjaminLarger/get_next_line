/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 13:42:23 by blarger           #+#    #+#             */
/*   Updated: 2023/12/10 14:36:38 by blarger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <assert.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (s == NULL || s[0] == '\0')
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	return (0);
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*array;

	i = 0;
	array = (char *)malloc(count * size);
	if (!array)
		return (0);
	while (i < count * size)
	{
		array[i] = 0;
		i++;
	}
	return (array);
}

char	*ft_concat(char *cat, char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!src)
		return (dest);
	while (src[i] != '\0')
	{
		cat[i] = src[i];
		i++;
	}
	while (dest[j] != '\0')
	{
		cat[i] = dest[j];
		i++;
		j++;
	}
	cat[i] = '\0';
	return (cat);
}

char	*ft_strcat_mal(char *dest, char *src)
{
	char	*cat;

	if (!src)
		return (NULL);
	if (!dest)
	{
		dest = ft_calloc((ft_strlen(src) + 2), sizeof(char));
		if (!dest)
			return (NULL);
	}
	cat = ft_calloc((ft_strlen(src) + ft_strlen(dest) + 2), sizeof(char));
	if (!cat)
	{
		return (free(dest), NULL);
	}
	cat = ft_concat(cat, src, dest);
	free(dest);
	return (cat);
}
