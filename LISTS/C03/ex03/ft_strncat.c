/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 16:42:22 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/08 16:23:28 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				end;
	unsigned int	index;

	index = 0;
	end = ft_find(dest);
	while (src[index] != '\0' && index < nb)
	{
		dest[end + index] = src[index];
		index++;
	}
	if (index == nb && src[index] != '\0')
		dest[end + index + 1] = '\0';
	dest[end + index] = '\0';
	return (dest);
}
