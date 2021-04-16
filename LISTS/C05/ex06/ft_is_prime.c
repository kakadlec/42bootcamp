/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:58:05 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/13 21:36:00 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime_rec(int a, int b)
{
	if (a % b == 0 && a != b)
		return (0);
	if (a % b == 0 && a == b)
		return (1);
	return (ft_is_prime_rec(a, b + 1));
}

int		ft_is_prime(int nb)
{
	if (nb < 2)
		return (0);
	return (ft_is_prime_rec(nb, 2));
}
