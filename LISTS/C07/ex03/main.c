/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 21:21:50 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/14 23:44:15 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int		main(void)
{
	char **strs;
	char *str;

	strs = malloc(3 * sizeof(char *));
	if (strs == NULL)
		return (1);
	strs[0] = "Karel";
	strs[1] = "e";
	strs[2] = "Legal";
	str = ft_strjoin(3, strs, " ");
	printf("%s", str);
	free(str);
}
