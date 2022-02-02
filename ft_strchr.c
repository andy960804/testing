/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boskim <boskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:54:37 by boskim            #+#    #+#             */
/*   Updated: 2022/02/02 15:42:57 by boskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	char	*res;

	res = (char *)s;
	c = (char)c;
	while (*res && *res != c)
	{
		res++;
	}
	if (*res == c)
	{
		return (res);
	}
	return (NULL);
}
