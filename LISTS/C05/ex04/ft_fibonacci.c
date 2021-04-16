/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkadlec <kkadlec@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 11:54:41 by kkadlec           #+#    #+#             */
/*   Updated: 2021/04/13 21:41:05 by kkadlec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int result;

	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	else
	{
		result = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
		return (result);
	}
}
