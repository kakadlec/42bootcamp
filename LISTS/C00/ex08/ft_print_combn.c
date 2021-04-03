/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 12:14:18 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/02 12:14:20 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_print('8');
	}
	else if (nb < 0)
	{
		ft_print('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		ft_print(48 + nb % 10);
	}
}

void	ft_comb_recurs(int actual, int total)
{
	int index;

	index = 0;
	if (actual == total)
	{
		while (index <= 9)
		{
			ft_putnbr(index++);
		}
	}
	else
	{
		ft_comb_recurs(++actual, total);
	}
}

void	ft_print_combn(int n)
{
	ft_comb_recurs(0, n);
}
