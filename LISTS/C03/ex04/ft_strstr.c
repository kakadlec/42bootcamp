/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 19:14:25 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/07 21:33:37 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	ft_lookup(char *str, char *to_find, int index2)
{
	int index1;

	index1 = 0;
	while (to_find[index1] != '\0')
	{
		if (to_find[index1] == str[index1 + index2])
			index1++;
		else
			break ;
	}
	if (to_find[index1] == '\0')
		return (true);
	else
		return (false);
}

char	*ft_strstr(char *str, char *to_find)
{
	int index1;
	int index2;

	index1 = 0;
	index2 = 0;
	if (to_find[index1] == '\0')
		return (str);
	while (to_find[index1] != '\0')
	{
		while (str[index2] != '\0')
		{
			if (to_find[index1] != str[index2])
				index2++;
			else
			{
				if (ft_lookup(str, to_find, index2))
					return (&str[index2]);
				else
					index2++;
			}
		}
		index1++;
	}
	return (0);
}
