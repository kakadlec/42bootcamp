/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 21:27:24 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/06 20:30:08 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	if (src[i] == '\0')
		return (i);
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0' && i == size)
		dest[i - 1] = '\0';
	else if (i < size)
		dest[i] = '\0';
	else
	{
		dest[i - 1] = '\0';
		while (src[i] != '\0')
			i++;
	}
	return (i);
}
