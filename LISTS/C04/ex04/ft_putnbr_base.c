/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 00:03:08 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/12 22:26:35 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

int		ft_strlen1(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

bool	is_space1(char *str)
{
	if (*str == '\t' || *str == '\n' || *str == '\v'
	|| *str == '\f' || *str == '\r' || *str == ' ')
		return (true);
	else
		return (false);
}

void	ft_translate1(int nbr, int radix, char *base)
{
	if (nbr == -2147483648)
	{
		ft_translate1(nbr / radix, radix, base);
		write(1, &(base[-(nbr % radix)]), 1);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_translate1(-nbr, radix, base);
		return ;
	}
	if (nbr > radix - 1)
		ft_translate1(nbr / radix, radix, base);
	write(1, &(base[nbr % radix]), 1);
}

bool	ft_is_invalid_base1(char *base)
{
	int	index;
	int	ocurr;

	index = 0;
	ocurr = 0;
	while (*base != '\0')
	{
		if (is_space1(base) || *base == '+' || *base == '-')
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

void	ft_putnbr_base(int nbr, char *base)
{
	int radix;

	radix = ft_strlen1(base);
	if (radix <= 1)
		return ;
	if (ft_is_invalid_base1(base))
		return ;
	ft_translate1(nbr, radix, base);
}
