/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 19:00:35 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/14 19:41:55 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		*ft_range(int min, int max);

int		main(void)
{
	int min = 10;
	int max = 50;
	int *matriz;

	matriz = ft_range(min, max);

	for (int i = 0; i < max - min; i++)
	{
		printf("%d ", matriz[i]);
	}
	printf("\n");
}
