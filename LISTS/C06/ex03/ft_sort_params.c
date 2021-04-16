/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 20:20:03 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/14 00:35:23 by kkadlec          ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] != s2[index])
			break ;
		index++;
	}
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}

int		ft_print_params(int argc, char **argv)
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

int		main(int argc, char **argv)
{
	int		count;
	int		count2;
	char	*temp;

	count = 1;
	if (argc > 1)
	{
		while (count < argc)
		{
			count2 = argc - 1;
			while (count2 >= count)
			{
				if (ft_strcmp(argv[count2 - 1], argv[count2]) > 0)
				{
					temp = argv[count2 - 1];
					argv[count2 - 1] = argv[count2];
					argv[count2] = temp;
				}
				count2--;
			}
			count++;
		}
	}
	ft_print_params(argc, argv);
	return (0);
}
