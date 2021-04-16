/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:06:06 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/14 18:59:35 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	int		size;
	int		index;
	char	*dup;

	index = 0;
	size = ft_strlen(src);
	dup = malloc(size * sizeof(char) + 1);
	if (dup == NULL)
	{
		return (0);
	}
	else
	{
		while (src[index])
		{
			dup[index] = src[index];
			index++;
		}
		dup[index] = '\0';
		return (dup);
	}
}
