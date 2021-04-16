/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 20:20:03 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/14 00:36:05 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
}

int		main(int argc, char **argv)
{
	int aux;

	aux = 1;
	if (argc > 1)
	{
		while (aux < argc)
		{
			ft_putstr(argv[aux]);
			ft_putstr("\n");
			aux++;
		}
	}
	return (0);
}
