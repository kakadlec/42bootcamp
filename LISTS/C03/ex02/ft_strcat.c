/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 16:24:29 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/07 16:49:53 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_end(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

char	*ft_strcat(char *dest, char *src)
{
	int end;
	int index;

	index = 0;
	end = ft_find_end(dest);
	while (src[index] != '\0')
	{
		dest[end + index] = src[index];
		index++;
	}
	dest[end + index] = '\0';
	return (dest);
}
