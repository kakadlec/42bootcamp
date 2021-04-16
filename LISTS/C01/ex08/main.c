/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 14:21:00 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/03 22:09:16 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int table[4] = {4, 3, 2, 1};

	ft_sort_int_tab(table, 4);

	for(int i = 0; i < 4; i++)
	{
		printf("%d ", table[i]);
	}
}
