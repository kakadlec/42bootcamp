/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_rules.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 11:17:42 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/11 17:33:57 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    aux_fill(int board[4][4], int index, int option)
{
    int aux;

    aux = 0;
    while(aux < 4)
    {
        if(option == 0)
            board[aux][index] = aux + 1;
        else
            board[index][aux] = aux + 1;
        aux++;
    }
}

void    look_1(int board[4][4], int *data)
{
    int index;

    index = 0;
    while(index < 16)
    {
        if(data[index] == 1)
        {
			if(index <= 3)
				board[0][index] = 4;
			if (index >= 4 && index <= 7)
				board[3][index - 4] = 4;
            if (index >= 8 && index <= 11)
				board[index - 8][0] = 4;
			if (index >= 12 && index <= 15)
				board[index - 12][3] = 4;
        }
        index++;
    }
}

void    look_2_3(int board[4][4],int *data, int index)
{
    while(index < 16)
    {
        if(index <= 3 || (index >= 8 && index <= 11))
        {
            if(data[index] == 2 && data[index + 4] == 3)
            {
                if(index <= 3)
                    board[0][index] = 4;
                else
                    board[index - 8][0] = 4;
            }
        }
        else
        {
            if(data[index] == 2 && data[index - 4] == 3)
            {
                if (index >= 12)
                    board[index - 12][2] = 4;
                else
                    board[2][index - 4] = 4;
            }
        }
        index++;
    }
}

void    look_4(int board[4][4], int *data)
{
    int index;

    index = 0;
    while(index < 16)
    {
        if(data[index] == 4)
        {
            if(index <= 3)
                aux_fill(board, index, 0);
            else if (index >= 4 && index <= 7)
                aux_fill(board, index - 4, 0);
            else if (index >= 8 && index <= 11)
                aux_fill(board, index - 8, 1);
            else
                aux_fill(board, index - 12, 1);
        }
        index++;
    }
}
