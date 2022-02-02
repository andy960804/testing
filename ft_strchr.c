/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boskim <boskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:54:37 by boskim            #+#    #+#             */
/*   Updated: 2022/02/02 09:38:17 by boskim           ###   ########seoul.kr  */
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
