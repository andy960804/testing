/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boskim <boskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:54:55 by boskim            #+#    #+#             */
/*   Updated: 2022/02/02 15:47:16 by boskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*res;
	char	*ptr;

	ptr = (char *)s;
	c = (char)c;
	res = NULL;
	while (*ptr)
	{
		if (*ptr == c)
		{
			res = ptr;
		}
		ptr++;
	}
	/* if (*ptr == c)
	{
		res = ptr;
	} */
	return (res);
}
