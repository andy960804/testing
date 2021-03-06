/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boskim <boskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:41:55 by boskim            #+#    #+#             */
/*   Updated: 2022/02/02 19:40:50 by boskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' || \
			c == '\f' || c == '\r' || c == ' ')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	long int	res;
	int			positve;
	size_t		i;

	res = 0;
	positve = 1;
	i = 0;
	while (str[i] && ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			positve = -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		res = res * 10;
		res = res + str[i] - '0';
		i++;
	}
	res = res * positve;
	return ((int)res);
}
