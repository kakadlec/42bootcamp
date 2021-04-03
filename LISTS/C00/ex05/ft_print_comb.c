/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 19:48:49 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/01 19:48:53 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char number0;
	char number1;
	char number2;

	number0 = '0';
	while (number0 <= '7')
	{
		number1 = number0 + 1;
		while (number1 <= '8')
		{
			number2 = number1 + 1;
			while (number2 <= '9')
			{
				write(1, &number0, 1);
				write(1, &number1, 1);
				write(1, &number2, 1);
				if (number0 != '7' || number1 != '8' || number2 != '9')
					write(1, ", ", 2);
				number2++;
			}
			number1++;
		}
		number0++;
	}
}
