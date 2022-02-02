/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boskim <boskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:48:09 by boskim            #+#    #+#             */
/*   Updated: 2022/02/02 19:20:14 by boskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!needle[0])
	{
		return ((char *)haystack);
	}
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j] 
			&& haystack[i + j] == needle[j] && i + j < len)
		{
			j++;
		}
		if (!needle[j] && i + j <= len)
		{
			return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}
