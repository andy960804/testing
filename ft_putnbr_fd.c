/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boskim <boskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:54:15 by boskim            #+#    #+#             */
/*   Updated: 2022/02/03 00:09:58 by boskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_recursive(long int n, int fd)
{
	if (n >= 10)
	{
		ft_recursive(n / 10, fd);
	}
	ft_putchar_fd('0' + (n % 10), fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	long_n;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		long_n = (long int)n * -1;
	}
	else
	{
		long_n = n;
	}
	ft_recursive(long_n, fd);
}
