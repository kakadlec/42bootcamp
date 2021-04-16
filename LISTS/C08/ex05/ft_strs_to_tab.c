/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 13:50:06 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/16 12:02:56 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	int		size;
	int		index;
	char	*dup;

	index = 0;
	size = ft_strlen(src);
	dup = malloc(size * sizeof(char) + 1);
	if (dup == NULL)
	{
		return (0);
	}
	else
	{
		while (src[index])
		{
			dup[index] = src[index];
			index++;
		}
		dup[index] = '\0';
		return (dup);
	}
}

struct s_stock_str	*ft_new_stock(int size, char *str)
{
	struct s_stock_str *ret_value;

	ret_value = malloc(sizeof(struct s_stock_str));
	if (ret_value == NULL)
		return (0);
	ret_value->str = malloc(size * sizeof(char));
	ret_value->copy = malloc(size * sizeof(char));
	if (ret_value->str == NULL || ret_value->copy == NULL)
	{
		free(ret_value->str);
		free(ret_value->copy);
		free(ret_value);
		return (0);
	}
	ret_value->size = size;
	ret_value->str = str;
	ret_value->copy = ft_strdup(str);
	return (ret_value);
}

void				ft_del_stock(struct s_stock_str *stock)
{
	if (stock != NULL)
	{
		free(stock->str);
		free(stock->copy);
		free(stock);
	}
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*stock;
	int					index;
	int					size;

	index = 0;
	stock = malloc((ac + 1) * sizeof(struct s_stock_str));
	while (index < ac)
	{
		size = ft_strlen(av[index]);
		stock[index] = *ft_new_stock(size, av[index]);
		index++;
	}
	stock[index].str = 0;
	return (stock);
}
