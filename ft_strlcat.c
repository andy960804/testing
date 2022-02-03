/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boskim <boskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:54:42 by boskim            #+#    #+#             */
/*   Updated: 2022/02/03 10:07:39 by boskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (dest[i] && i < size)
		i++;
	j = 0;
	while (src[j] && (i + j) < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i + j < size)
		dest[i + j] = '\0';
	j = 0;
	while (src[j])
		j++;
	return (i + j);
}
