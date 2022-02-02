/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boskim <boskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:53:36 by boskim            #+#    #+#             */
/*   Updated: 2022/02/02 09:37:06 by boskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include "limits.h"

static int	priv_calc_number_of_digits(int n)
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
	int			len;
	char		*num_string;
	long int	long_n;
	int			i;

	len = priv_calc_number_of_digits(n);
	num_string = malloc(sizeof (*num_string) * (len + 1));
	if (!num_string)
		return (NULL);
	if (n == 0)
		num_string[0] = '0';
	long_n = n;
	if (long_n < 0)
		num_string[0] = '-';
	if (long_n < 0)
		long_n = long_n * -1;
	i = 0;
	while (long_n)
	{
		num_string[len - i - 1] = '0' + (long_n % 10);
		long_n = long_n / 10;
		i++;
	}
	num_string[len] = '\0';
	return (num_string);
}
