/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 02:07:12 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/13 21:34:32 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	ft_iterative_factorial(int nb);

int		main(void)
{
	printf("Fatorial de %d	e: %d		| esperado: %d\n", 2, ft_iterative_factorial(2), 2);
	printf("Fatorial de %d	e: %d		| esperado: %d\n", 5, ft_iterative_factorial(5), 120);
	printf("Fatorial de %d	e: %d	| esperado: %d\n", 10, ft_iterative_factorial(10), 3628800);
	printf("Fatorial de %d	e: %d		| esperado: %d\n", 0, ft_iterative_factorial(0), 1);
	printf("Fatorial de %d	e: %d		| esperado: %d\n", -5, ft_iterative_factorial(-5), 0);
	printf("Fatorial de 'D'	e: %d		| esperado: %d\n", ft_iterative_factorial('D'), 0);
}
