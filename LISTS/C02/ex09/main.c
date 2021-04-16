/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:06:50 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/06 17:50:54 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char	str_base[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	*str_upper;

	str_upper = ft_strcapitalize(str_base);
	printf("Upper: %s\n", str_upper);
}
