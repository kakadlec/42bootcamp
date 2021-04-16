/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 02:07:12 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/13 10:57:22 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb);

int		main(void)
{
	printf("Fatorial de %d	e: %d		| esperado: %d\n", 2, ft_recursive_factorial(2), 2);
	printf("Fatorial de %d	e: %d		| esperado: %d\n", 5, ft_recursive_factorial(5), 120);
	printf("Fatorial de %d	e: %d	| esperado: %d\n", 10, ft_recursive_factorial(10), 3628800);
	printf("Fatorial de %d	e: %d		| esperado: %d\n", 0, ft_recursive_factorial(0), 1);
	printf("Fatorial de %d	e: %d		| esperado: %d\n", -5, ft_recursive_factorial(-5), 0);
	printf("Fatorial de 'D'	e: %d		| esperado: %d\n", ft_recursive_factorial('D'), 0);
	//printf("Fatorial de 'IO' e: %d | esperado: %s\n", ft_recursive_factorial(2147483647), "");
}
