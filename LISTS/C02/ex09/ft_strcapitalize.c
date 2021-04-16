/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 20:49:14 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/06 19:02:56 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	curr;

	i = 0;
	while (true)
	{
		curr = str[i];
		if (curr == '\0')
			break ;
		if (curr >= 'A' && curr <= 'Z')
			str[i] = curr + 32;
		if (curr >= 'a' && curr <= 'z')
		{
			if (i == 0)
				str[i] = curr - 32;
			else if ((str[i - 1] < '0' || str[i - 1] > '9')
				&& (str[i - 1] < 'A' || str[i - 1] > 'Z')
				&& (str[i - 1] < 'a' || str[i - 1] > 'z'))
				str[i] = curr - 32;
		}
		i++;
	}
	return (str);
}
