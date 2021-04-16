/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 11:18:00 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/11 23:56:38 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	look_1(int board[4][4], int *data);
void	look_4(int board[4][4], int *data);
void	look_2_3(int board[4][4], int *data, int index);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	init_board(int board[4][4])
{
	int line;
	int column;

	line = 0;
	column = 0;
	while (line < 4)
	{
		while (column < 4)
		{
			board[line][column] = 0;
			column++;
		}
		column = 0;
		line++;
	}
}

void	fill_board(int board[4][4], int *data)
{
	look_1(board, data);
	look_4(board, data);
	look_2_3(board, data, 0);
}

void	print_board(int board[4][4])
{
	int line;
	int column;

	line = 0;
	column = 0;
	while (line < 4)
	{
		while (column < 4)
		{
			ft_putchar(board[line][column] + '0');
			if (column != 3)
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		column = 0;
		line++;
	}
}
