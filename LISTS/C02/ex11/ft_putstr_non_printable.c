/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 22:48:32 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/06 21:02:25 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchars(char c)
{
	write(1, &c, 1);
}

bool	is_char_printable(char c)
{
	return (c >= ' ' && c != 127);
}

void	ft_putstr_non_printable(char *str)
{
	int				index;
	unsigned char	curr;

	index = 0;
	while (true)
	{
		curr = str[index];
		if (curr == '\0')
			break ;
		if (is_char_printable(curr))
			ft_putchars(curr);
		else
		{
			ft_putchars('\\');
			ft_putchars("0123456789abcdef"[curr / 16]);
			ft_putchars("0123456789abcdef"[curr % 16]);
		}
		index++;
	}
}
