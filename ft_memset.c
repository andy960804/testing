/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boskim <boskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:54:11 by boskim            #+#    #+#             */
/*   Updated: 2022/02/02 13:10:18 by boskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int c, size_t len)
{
	size_t			i;
	unsigned char	*p_ptr;

	p_ptr = p;
	i = 0;
	while (i < len)
	{
		p_ptr[i] = (unsigned char)c;
		i++;
	}
	if (p_ptr == NULL)
	{
		return (NULL)
	}
	return (p);
}
