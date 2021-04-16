/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:06:50 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/06 20:51:05 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int		main(void)
{
	char strtest0[] = {'0', '1', 3, 26, '2', '3', 12, 'f', '\n', 'a', 'b', '\0'};
	char strtest1[] = {'0', 'C', 'b', 127, 2, 'a', -82, 'b', -1, '\0'};

	char strans0[] = "01\\03\\1a23\\0cf\\0aab";
	char strans1[] = "0Cb\\7f\\02a\\aeb\\ff";

	printf("\n");

	ft_putstr_non_printable(strtest0);
	printf("\t==\t%s\n", strans0);

	printf("\n");

	ft_putstr_non_printable(strtest1);
	printf("\t==\t%s\n", strans1);

	printf("\n");
}
