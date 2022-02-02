/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boskim <boskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:54:04 by boskim            #+#    #+#             */
/*   Updated: 2022/02/02 15:28:02 by boskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == c)
		{
			return (ptr + i);
		}
		i++;
	}
	return (NULL);
}
