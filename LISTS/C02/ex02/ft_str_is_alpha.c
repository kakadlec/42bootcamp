/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 18:21:02 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/04 19:00:43 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int i;
	int curr;

	i = 0;
	while (str[i] != '\0')
	{
		curr = str[i];
		if (!((curr >= 'a' && curr <= 'z') || (curr >= 'A' && curr <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
