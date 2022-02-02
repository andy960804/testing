/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boskim <boskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:54:06 by boskim            #+#    #+#             */
/*   Updated: 2022/02/02 15:30:59 by boskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1ptr;
	unsigned char	*s2ptr;

	s1ptr = (unsigned char *)s1;
	s2ptr = (unsigned char *)s2;
	i = 0;
	while (s1ptr[i] == s2ptr[i] && i < n)
	{
		i++;
	}
	if (i < n)
	{
		return (s1ptr[i] - s2ptr[i]);
	}
	return (0);
}
