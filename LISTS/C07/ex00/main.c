/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:05:32 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/14 19:00:07 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int		main(void)
{
	char *str = "Voces sao de mais!";
	char *dup;

	dup = ft_strdup(str);
	printf("%s\n", dup);
	free(dup);
}
