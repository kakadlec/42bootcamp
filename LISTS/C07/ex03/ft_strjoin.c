/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 21:21:29 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/14 23:41:41 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int end;
	int index;

	index = 0;
	end = ft_strlen(dest);
	while (src[index] != '\0')
	{
		dest[end + index] = src[index];
		index++;
	}
	dest[end + index] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		bound;
	int		index;
	char	*buffer;

	index = 0;
	bound = ft_strlen(sep) * size - 1;
	if (size == 0)
		return (0);
	while (index < size)
	{
		bound += ft_strlen(strs[index]);
		index++;
	}
	buffer = malloc(bound * sizeof(char *));
	index = 0;
	while (index < size)
	{
		buffer = ft_strcat(buffer, strs[index]);
		if (index < size - 1)
			buffer = ft_strcat(buffer, sep);
		index++;
	}
	return (buffer);
}
