/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 13:11:30 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/09 12:25:46 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	printf("-- Exercicio 00: ");
	char str0[] = "0";
	char str1[] = "01230456789";
	// char str2[] = "abcdef";
	// char str3[] = "fedcba";
	// char str4[] = {-123, -56, 6, 32, 64, 65, 66, 0};
	// char str5[] = "abcdefghijadofhiasdfj";
	// char str6[] = "abcdefghijadfedcba";

	// int ret0 = strcmp(str0, str1);
	int ret1 = ft_strcmp(str0, str1);
	printf("%i\n", ret1);

	// if (strcmp(str0, str1) != ft_strcmp(str0, str1))
	// 	printf("KO, expected %i got %i\n", ret0, ret1);
	// else if ((ret0 = strcmp(str1, str2)) != (ret1 = ft_strcmp(str1, str2)))
	// 	printf("KO, expected %i got %i\n", ret0, ret1);
	// else if ((ret0 = strcmp(str2, str3)) != (ret1 = ft_strcmp(str2, str3)))
	// 	printf("KO, expected %i got %i\n", ret0, ret1);
	// else if ((ret0 = strcmp(str3, str4)) != (ret1 = ft_strcmp(str3, str4)))
	// 	printf("KO, expected %i got %i\n", ret0, ret1);
	// else if ((ret0 = strcmp(str5, str6)) != (ret1 = ft_strcmp(str5, str6)))
	// 	printf("KO, expected %i got %i\n", ret0, ret1);
	// else
	// 	printf("OK\n");
	return(0);
}