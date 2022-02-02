/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boskim <boskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:53:20 by boskim            #+#    #+#             */
/*   Updated: 2022/02/02 09:36:10 by boskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*result;
	size_t	i;

	result = malloc(count * size);
	if (!result)
	{
		return (NULL);
	}
	i = 0;
	while (i < count * size)
	{
		result[i] = 0;
		i++;
	}
	return (result);
}
