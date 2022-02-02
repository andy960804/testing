/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boskim <boskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:53:36 by boskim            #+#    #+#             */
/*   Updated: 2022/02/03 00:00:16 by boskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include "limits.h"

static int	calc_number(int n)
{
	long int	long_n;
	int			len;

	if (n == 0)
	{
		return (1);
	}
	long_n = n;
	len = 0;
	if (long_n < 0)
	{
		len = 1;
		long_n = long_n * -1;
	}
	while (long_n)
	{
		len++;
		long_n = long_n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*num_str;
	int			len;
	int			i;
	long int	long_n;
	
	len = calc_number(n);
	num_str = malloc(sizeof (*num_str) * (len + 1));
	if (!num_str)
		return (NULL);
	if (n == 0)
		num_str[0] = '0';
	long_n = n;
	if (long_n < 0)
		num_str[0] = '-';
	if (long_n < 0)
		long_n = long_n * -1;
	i = 0;
	while (long_n)
	{
		num_str[len - i - 1] = '0' + (long_n % 10);
		long_n = long_n / 10;
		i++;
	}
	num_str[len] = '\0';
	return (num_str);
}
