/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 19:08:38 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/04 22:16:36 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int		i;
	char	curr;

	i = 0;
	while (str[i] != '\0')
	{
		curr = str[i];
		if (!(curr >= 'a' && curr <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
