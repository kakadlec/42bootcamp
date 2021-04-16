/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 21:40:06 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/12 19:29:11 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	is_space(char *str)
{
	if (*str == '\t' || *str == '\n' || *str == '\v'
	|| *str == '\f' || *str == '\r' || *str == ' ')
		return (true);
	else
		return (false);
}

int		ft_atoi(char *str)
{
	int result;
	int signal;

	result = 0;
	signal = 1;
	while (is_space(str) || *str == '+' || *str == '-')
	{
		if (*str == '-')
			signal = signal * -1;
		str++;
	}
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			result = result * 10;
			result = result + *str - '0';
			str++;
		}
		else
			break ;
	}
	return (result * signal);
}
