/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 13:27:23 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/12 22:31:16 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

void	ft_strlen_test(char *str)
{
	int size;
	int ft_size;

	size = strlen(str);
	ft_size = strlen(str);
	if (size != ft_size)
		printf("> KO, return value of ft_strlen differs from expected. expected: %d, got: %d\n", size, ft_size);
	else
		printf("> OK. result: %d\n", ft_size);
}

int	main(void)
{
	const char* str1 = "batata frita";
	const char* str2 = "maCarroni";

	printf("\e[1;31m-- Exercício 00: \e[0m");
	if ((int) strlen(str1) == ft_strlen((char*) str1) && (int) strlen(str2) == ft_strlen((char*) str2))
		printf("OK\n");
	else
		printf("KO, strlen(\"%s\") = %i, got %i. strlen(\"%s\") = %i, got %i.", str1, (int) strlen(str1), ft_strlen((char*) str1), str2, (int) strlen(str2), ft_strlen((char*) str2));
	// char *str;

	// str = "";
	// ft_strlen_test(str);
	// str = "Test";
	// ft_strlen_test(str);
	// str = "Testing mored and more and more and more and more and more.";
	// ft_strlen_test(str);
	// return (0);
}
