/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boskim <boskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:54:37 by boskim            #+#    #+#             */
/*   Updated: 2022/02/02 00:23:29 by boskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	char	*result;

	result = (char *)s;
	c = (char)c;
	while (*result && *result != c)
	{
		result++;
	}
	if (*result == c)
	{
		return (result);
	}
	return (NULL);
}
