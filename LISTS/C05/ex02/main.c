/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 02:07:12 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/13 11:45:56 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power);

int		main(void)
{
	printf("2 elevado a 2 e: %d | Esperado: 4\n", ft_iterative_power(2, 2));
	printf("2 elevado a 4 e: %d | Esperado: 16\n", ft_iterative_power(2, 4));
	printf("5 elevado a 2 e: %d | Esperado: 25\n", ft_iterative_power(5, 2));
	printf("0 elevado a 0 e: %d | Esperado: 1\n", ft_iterative_power(0, 0));
	printf("2 elevado a -1 e: %d | Esperado: 0\n", ft_iterative_power(2, -1));
}
