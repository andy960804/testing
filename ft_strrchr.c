/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boskim <boskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:54:55 by boskim            #+#    #+#             */
/*   Updated: 2022/02/02 00:24:27 by boskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*result;
	char	*ptr;

	ptr = (char *)s;
	c = (char)c;
	result = NULL;
	while (*ptr)
	{
		if (*ptr == c)
		{
			result = ptr;
		}
		ptr++;
	}
	if (*ptr == c)
	{
		result = ptr;
	}
	return (result);
}
