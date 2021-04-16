/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 22:14:26 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/04 22:18:33 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int		i;
	char	curr;

	i = 0;
	while (str[i] != '\0')
	{
		curr = str[i];
		if (!(curr >= 'A' && curr <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
