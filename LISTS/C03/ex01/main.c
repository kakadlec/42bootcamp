/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 15:21:57 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/08 17:31:15 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char str0[] = "string";
	char str1[] = "string1";
	char str2[] = "abcdef";
	char str3[] = "fedcba";
	char str4[] = {-123, -56, 6, 32, 64, 65, 66, 0};
	int str0l = strlen(str0);
	int str1l = strlen(str1);
	int ret0 = strcmp(str0, str1);
	int ret1 = ft_strncmp(str0, str1, 0);

	if ((ret0 = strncmp(str0, str1, str0l) != (ret1 = ft_strncmp(str0, str1, str0l))))
		printf("KO, test00 expected %i got %i\n", ret0, ret1);
	else if ((ret0 = strncmp(str2, str3, 0)) != (ret1 = ft_strncmp(str2, str3, 0)))
		printf("KO, test01 expected %i got %i\n", ret0, ret1);
	else if ((ret0 = strncmp(str1, str2, str1l)) != (ret1 = ft_strncmp(str1, str2, str1l)))
		printf("KO, test02 expected %i got %i\n", ret0, ret1);
	else if ((ret0 = strncmp(str2, str3, 2)) != (ret1 = ft_strncmp(str2, str3, 2)))
		printf("KO, test03 expected %i got %i\n", ret0, ret1);
	else if ((ret0 = strncmp(str3, str4, 2)) != (ret1 = ft_strncmp(str3, str4, 2)))
		printf("KO, test04 expected %i got %i\n", ret0, ret1);
	else if ((ret0 = strncmp(str3, str4, 100)) != (ret1 = ft_strncmp(str3, str4, 100)))
		printf("KO, test05 expected %i got %i\n", ret0, ret1);
	else if ((ret0 = strncmp(str0, str1, 100)) != (ret1 = ft_strncmp(str0, str1, 100)))
		printf("KO, test06 expected %i got %i\n", ret0, ret1);
	else
		printf("OK\n");
	return (0);
}
