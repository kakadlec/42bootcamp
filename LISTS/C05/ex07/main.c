/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 02:07:12 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/13 19:04:25 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int		ft_find_next_prime(int nb);

int		main(void)
{
	//printf("Proximo primo de -2 e: %d\n", ft_find_next_prime(2000000000));
	printf("Proximo primo de INT_MAX - 11 e: %d\n", ft_find_next_prime(2147483630));
}
