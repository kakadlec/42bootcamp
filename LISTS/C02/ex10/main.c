/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:06:50 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/06 20:30:33 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int		main(void)
{
	char str0[] = "Ninguem liga";
	char str1[] = "outra 777 sad2 func";
	char str2[] = "striGn Mais doida\n doia\\varioschar\r\r\r";
	char str3[] = "";
	char buffer0[100];
	char buffer1[100];

	size_t str0l = strlen(str0);
	size_t str1l = strlen(str1) + 10;
	size_t str2l = strlen(str2) - 7;
	size_t str3l = strlen(str3);

	size_t ret0s, ret1s;
	if (ret0s = ft_strlcpy(buffer0, str0, str0l), strlcpy(buffer1, str0, str0l), strncmp(buffer0, buffer1, str0l) != 0)
		printf("1KO, expected %s got %s", buffer1, buffer0);
	else if (ret1s = strlcpy(buffer0, str0, str0l), ret0s != ret1s)
		printf("1KO, expected return %zu got %zu in str0", ret1s, ret0s);

	else if (ret0s = ft_strlcpy(buffer0, str1, str1l), strlcpy(buffer1, str1, str1l), strncmp(buffer0, buffer1, str1l) != 0)
		printf("2KO, expected %s got %s", buffer1, buffer0);
	else if (ret1s = strlcpy(buffer0, str1, str1l), ret0s != ret1s)
		printf("2KO, expected return %zu got %zu in str1", ret1s, ret0s);

	else if (ret0s = ft_strlcpy(buffer0, str2, str2l), strlcpy(buffer1, str2, str2l), strncmp(buffer0, buffer1, str2l) != 0)
		printf("3KO, expected %s got %s", buffer1, buffer0);
	else if (ret1s = strlcpy(buffer0, str2, str2l), ret0s != ret1s)
	 	printf("3KO, expected return %zu got %zu in str2", ret1s, ret0s);

	else if (ret0s = ft_strlcpy(buffer0, str3, str3l), strlcpy(buffer1, str3, str3l), strncmp(buffer0, buffer1, str3l) != 0)
		printf("4KO, expected %s got %s", buffer1, buffer0);
	else if (ret1s = strlcpy(buffer0, str3, str3l), ret0s != ret1s)
		printf("4KO, expected return %zu got %zu in str3", ret1s, ret0s);
	else
		printf("OK");
	printf("\n");
}
