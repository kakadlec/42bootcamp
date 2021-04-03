/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 22:42:39 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/03 01:41:13 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	rush(int column, int line)
{
	int circle;
	int pipe; 
	int trace;	
	int c;
	int l;
	
	circle = 111;
	pipe = 124;
	trace = 45;
	c = 0;
	l = 0;
	ft_putchar(line);
	ft_putchar('\n');
	while(l < line)
	{
		while(c < column)
		{
			if(l == 0 || c == 0 || c == column - 1 || l == line -1)
			{
				ft_putchar(circle);				
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
	ft_putchar('\n');
}
