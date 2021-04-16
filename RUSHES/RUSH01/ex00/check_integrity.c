/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_integrity.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 11:17:34 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/11 23:54:51 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	top_view(int board[4][4], int column, int view);
bool	down_view(int board[4][4], int column, int view);
bool	left_view(int board[4][4], int line, int view);
bool	right_view(int board[4][4], int line, int view);

bool	check_input(const char *arg)
{
	int index;

	index = 0;
	while (arg[index] != '\0')
	{
		if (arg[index] == ' ')
		{
			if (arg[index + 1] == ' ')
				return (false);
			else
				index++;
		}
		if (arg[index] >= '1' && arg[index] <= '4')
			index++;
		else
			return (false);
	}
	return (true);
}

bool	validate_board(int board[4][4], int *data)
{
	int index;

	index = 0;
	while (index < 16)
	{
		if (index >= 0 && index <= 3)
			if (!top_view(board, index, data[index]))
				return (false);
		if (index >= 4 && index <= 7)
			if (!down_view(board, index - 4, data[index]))
				return (false);
		if (index >= 8 && index <= 11)
			if (!left_view(board, index - 8, data[index]))
				return (false);
		if (index >= 12 && index <= 15)
			if (!right_view(board, index - 12, data[index]))
				return (false);
		index++;
	}
	return (true);
}
