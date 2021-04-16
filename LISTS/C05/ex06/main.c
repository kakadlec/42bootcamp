/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 02:07:12 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/13 15:17:02 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb);

int		main(void)
{
	printf("O numero 2 e primo? %d\n", ft_is_prime(2));
	printf("O numero 3 e primo? %d\n", ft_is_prime(3));
	printf("O numero 4 e primo? %d\n", ft_is_prime(4));
	printf("O numero 13 e primo? %d\n", ft_is_prime(13));
	printf("O numero 31 e primo? %d\n", ft_is_prime(31));
	printf("O numero 100 e primo? %d\n", ft_is_prime(100));
}
