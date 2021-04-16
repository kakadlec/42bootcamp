/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_integrity.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 11:17:34 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/11 14:48:31 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	top_view(int board[4][4],int column, int view);
bool	down_view(int board[4][4],int column, int view);
bool	left_view(int board[4][4],int line, int view);
bool	right_view(int board[4][4],int line, int view);

bool    check_input(const char *arg)
{

    while(*arg != '\0')
    {
        if((*arg >= '1' && *arg <= '4') || *arg == ' ')
            arg++;
        else
            return (false);
    }
    return (true);
}

bool    validate_board(int board[4][4], int *data)
{
	int index;

	index = 0;
	while (index < 16)
	{
		if (index >= 0 && index <= 3)
		{
			if(!top_view(board, index, data[index]))
			{
				return (false);
			}
		}
		else if (index >= 4 && index <= 7)
		{
			if(!down_view(board, index - 4, data[index]))
				return (false);
		}
		else if (index >= 8 && index <= 11)
		{
			if(!left_view(board, index - 8, data[index]))
				return (false);
		}
		else
		{
			if(!right_view(board, index - 12, data[index]))
				return (false);
		}
		index++;
	}
	return (true);
}