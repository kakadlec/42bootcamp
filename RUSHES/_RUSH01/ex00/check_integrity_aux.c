/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_integrity_aux.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 11:30:46 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/11 14:48:19 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	top_view(int board[4][4],int column, int view)
{
	int line;
	int count;
	int h_height;

	line = 0;
	count = 1;
	h_height = board[line][column];
	while (line < 4)
	{
		if (board[line][column] > h_height)
		{
			h_height = board[line][column];
			count++;
		}
		line++;
	}
	if (count == view)
		return (true);
	return (false);
}

bool	down_view(int board[4][4],int column, int view)
{
	int line;
	int count;
	int h_height;

	line = 3;
	count = 1;
	h_height = board[line][column];
	while (line >= 0)
	{
		if (board[line][column] > h_height)
		{
			h_height = board[line][column];
			count++;
		}
		line--;
	}
	if (count == view)
		return (true);
	return (false);
}

bool	left_view(int board[4][4],int line, int view)
{
	int column;
	int count;
	int h_height;

	column = 0;
	count = 1;
	h_height = board[line][column];
	while (column < 4)
	{
		if (board[line][column] > h_height)
		{
			h_height = board[line][column];
			count++;
		}
		column++;
	}
	if (count == view)
		return (true);
	return (false);
}

bool	right_view(int board[4][4],int line, int view)
{
	int column;
	int count;
	int h_height;

	column = 3;
	count = 1;
	h_height = board[line][column];
	while (column >= 0)
	{
		if (board[line][column] > h_height)
		{
			h_height = board[line][column];
			count++;
		}
		column--;
	}
	if (count == view)
		return (true);
	return (false);
}
