/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 22:42:39 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/03 20:31:45 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	ft_draw_border(int l, int line, int c, int column)
{
	if ((l == 0 && c == 0) || (c == 0 && l == line - 1))
	{
		ft_putchar('o');
	}
	else if ((l == 0 && c == column - 1) || (c == column - 1 && l == line - 1))
	{
		ft_putchar('o');
	}
	else if (l != 0 && l != line - 1)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar('-');
	}
}

void	rush(int x, int y)
{
	int c;
	int l;

	c = 0;
	l = 0;
	while (l < y)
	{
		while (c < x)
		{
			if (l == 0 || c == 0 || c == x - 1 || l == y - 1)
			{
				ft_draw_border(l, y, c, x);
			}
			else
			{
				ft_putchar(' ');
			}
			c++;
		}
		ft_putchar('\n');
		c = 0;
		l++;
	}
}
