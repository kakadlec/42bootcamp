/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scan.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 11:18:06 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/11 17:34:28 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool    validate_board(int board[4][4], int *data);

bool    scan_0(int board[4][4], int *line, int *column)
{
    *line = 0;
    *column = 0;
    while (*line < 4)
    {
		*column = 0;
        while (*column < 4)
        {
            if (board[*line][*column] == 0)
                return (true);
            *column += 1;
        }
        *line += 1;
    }
    return (false);
}

bool   check_line(int board[4][4], int line, int number)
{
    int column;

    column = 0;
    while(column < 4)
    {
        if(board[line][column] == number)
            return (false);
        column++;
    }
    return (true);
}

bool   check_col(int board[4][4], int column, int number)
{
    int line;

    line = 0;
    while(line < 4)
    {
        if(board[line][column] == number)
            return (false);
        line++;
    }
    return (true);
}

bool    scan(int board[4][4], int *data)
{
    int line;
    int column;
    int number;
	bool result;

    number = 1;
	result = scan_0(board, &line, &column);
    if (!(result) && (validate_board(board, data)))
	{
        return (true);
	}
    while (number <= 4)
    {
        if(check_line(board, line, number) && check_col(board, column, number) && board[line][column] == 0)
        {
            board[line][column] = number;
            if (scan(board, data))
                return (true);
            board[line][column] = 0;
        }
        number++;
    }
    return (false);
}