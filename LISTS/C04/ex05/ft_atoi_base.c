/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 21:36:04 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/12 22:24:47 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

int		ft_strlen2(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

bool	is_space2(char *str)
{
	if (*str == '\t' || *str == '\n' || *str == '\v'
	|| *str == '\f' || *str == '\r' || *str == ' ')
		return (true);
	else
		return (false);
}

bool	ft_is_invalid_base(char *base)
{
	int	index;
	int	ocurr;

	index = 0;
	ocurr = 0;
	while (*base != '\0')
	{
		if (is_space2(base) || *base == '+' || *base == '-')
			return (true);
		else
		{
			while (base[index] != '\0')
			{
				if (base[index] == *base)
					ocurr++;
				index++;
			}
			if (ocurr > 1)
				return (true);
			ocurr = 0;
			index = 0;
		}
		base++;
	}
	return (false);
}

void	ft_translate2(int nbr, int radix, char *base)
{
	if (nbr == -2147483648)
	{
		ft_translate2(nbr / radix, radix, base);
		write(1, &(base[-(nbr % radix)]), 1);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_translate2(-nbr, radix, base);
		return ;
	}
	if (nbr > radix - 1)
		ft_translate2(nbr / radix, radix, base);
	write(1, &(base[nbr % radix]), 1);
}

int		ft_atoi_base(char *str, char *base)
{
	int result;
	int signal;
	int radix;

	result = 0;
	signal = 1;
	while (is_space2(str) || *str == '+' || *str == '-')
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
	radix = ft_strlen2(base);
	if (radix <= 1)
		return (0);
	if (ft_is_invalid_base(base))
		return (0);
	ft_translate2(result * signal, radix, base);
	return (0);
}
