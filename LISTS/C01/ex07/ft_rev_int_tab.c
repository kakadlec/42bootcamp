/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 17:49:48 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/03 21:37:10 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int count;
	int count2;
	int temp[size];

	count = size - 1;
	count2 = 0;
	while (count >= 0)
	{
		temp[count2] = tab[count];
		count2++;
		count--;
	}
	count = 0;
	while (count < size)
	{
		tab[count] = temp[count];
		count++;
	}
}
