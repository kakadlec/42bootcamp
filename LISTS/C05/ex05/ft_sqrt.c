/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:23:51 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/14 00:55:40 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt_rec(int a, int b)
{
	if (b > 46340)
		return (0);
	if (b * b == a)
		return (b);
	if (b * b > a)
		return (0);
	return (ft_sqrt_rec(a, b + 1));
}

int		ft_sqrt(int nb)
{
	return (ft_sqrt_rec(nb, 1));
}
