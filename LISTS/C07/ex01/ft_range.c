/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 19:01:28 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/14 19:41:45 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int size;
	int index;
	int *array;

	index = 0;
	size = max - min;
	if (size <= 0)
		return (0);
	array = malloc(size * sizeof(int));
	if (array == NULL)
	{
		return (0);
	}
	else
	{
		while (index < size)
		{
			array[index] = min;
			index++;
			min++;
		}
		return (array);
	}
}
