/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 22:11:31 by dde-souz          #+#    #+#             */
/*   Updated: 2021/04/11 17:40:14 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

bool    load_input(const char *arg, int *data);
void    init_board(int board[4][4]);
void    fill_board(int board[4][4], int *data);
bool    scan(int board[4][4], int *data);
void    print_board(int board[4][4]);

int main(int argc, char const **argv)
{
	int board[4][4];
    int input[16];

    if (argc == 2)
    {
        if(load_input(argv[1], input))
        {
             init_board(board);
             fill_board(board, input);
             if (scan(board, input))
               print_board(board);
             else
               write(1, &"Error\n", 6);
        }
        else
            write(1, &"Error\n", 6);
    }
    else
    	write(1, &"Error\n", 6);
    return (0);
}
