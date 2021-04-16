/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:17:59 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/13 21:36:36 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_optimus_prime(int n)
{
	int i;

	i = 5;
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	while (i * i < n)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return (0);
		i = i + 6;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb > 2147483629)
		return (2147483647);
	if (nb < 2)
		return (2);
	while (ft_optimus_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
