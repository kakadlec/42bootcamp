/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 22:35:01 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/04 22:55:43 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int		i;
	char	curr;

	i = 0;
	while (str[i] != '\0')
	{
		curr = str[i];
		if (!(curr >= ' ' && curr <= '~'))
			return (0);
		i++;
	}
	return (1);
}
