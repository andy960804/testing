/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boskim <boskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:53:20 by boskim            #+#    #+#             */
/*   Updated: 2022/02/02 19:45:04 by boskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*res;
	size_t	i;

	res = malloc(count * size);
	if (!res)
	{
		return (NULL);
	}
	i = 0;
	while (i < count * size)
	{
		res[i] = 0;
		i++;
	}
	return (res);
}
