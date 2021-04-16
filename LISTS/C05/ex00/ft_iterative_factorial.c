/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 10:14:16 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/13 21:34:53 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int aux;
	int result;

	aux = 1;
	result = 1;
	if (nb < 0)
		return (0);
	while (aux < nb)
	{
		result = result * (aux + 1);
		aux++;
	}
	return (result);
}
