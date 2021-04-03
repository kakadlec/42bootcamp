/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:39:16 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/01 17:52:17 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int number;

	number = '0';
	while (number <= '9')
	{
		write(1, &number, 1);
		number++;
	}
}
