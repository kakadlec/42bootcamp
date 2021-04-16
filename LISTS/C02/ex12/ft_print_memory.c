/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 00:08:59 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/06 17:34:25 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	if (c >= ' ' && c != 127)
		write(1, &c, 1);
	else
		write(1, &".", 1);
}

void	ft_putstr(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= ' ' && str[count] != 127)
			ft_putchar(str[count]);
		else
			ft_putchar('.');
		count++;
	}
}

void	ft_puthex(int nb, int count, char *buffer)
{
	if (nb > 9)
		ft_puthex(nb / 16, count - 1, buffer);
	buffer[count] = ("0123456789abcdef"[nb % 16]);
}

void	ft_write_hex(void *addr)
{
	char	buffer[16];
	int		i;

	i = -1;
	while (i++ < 15)
		buffer[i] = '0';
	ft_puthex((unsigned int)addr, 14, buffer);
	buffer[15] = 0;
	ft_putstr(buffer);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	buffer[3];
	char	*curr;
	int		index;

	curr = (char *)addr;
	if (size == 0)
		return (addr);
	while ((void *)curr < (addr + size))
	{
		ft_write_hex(curr);
		write(1, &": ", 2);
		index = -1;
		while (index++ < 2)
			buffer[index] = 0;
		index = -1;
		while (index++ < 16)
		{
			ft_puthex(curr[index], 1, buffer);
			ft_putstr(buffer);
		}
		write(1, &" ", 1);
		index = -1;
		while (index++ < 16 && curr[index] != '\0')
			ft_putchar(curr[index]);
		write(1, &"\n", 1);
		curr += 16;
	}
	return (addr);
}
