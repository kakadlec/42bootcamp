/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-souz <dde-souz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 11:17:50 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/11 20:51:21 by dde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		check_input(const char *arg);

bool	load_input(const char *arg, int *data)
{
	int index;
	int jndex;

	if (check_input(arg))
	{
		index = 0;
		jndex = 0;
		while (arg[index] != '\0')
		{
			if (arg[index] != ' ')
			{
				(arg[index] == '1') ? data[jndex] = 1 : 0;
				(arg[index] == '2') ? data[jndex] = 2 : 0;
				(arg[index] == '3') ? data[jndex] = 3 : 0;
				(arg[index] == '4') ? data[jndex] = 4 : 0;
				jndex++;
			}
			index++;
		}
		return (true);
	}
	else
		return (false);
}
