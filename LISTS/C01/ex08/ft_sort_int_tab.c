/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 17:49:24 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/03 22:17:31 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int count;
	int count2;
	int temp;

	count = 0;
	count2 = size - 1;
	while (count < size)
	{
		while (count2 >= count)
		{
			if (tab[count2 - 1] > tab[count2])
			{
				temp = tab[count2 - 1];
				tab[count2 - 1] = tab[count2];
				tab[count2] = temp;
			}
			count2--;
		}
		count2 = size - 1;
		count++;
	}
}
