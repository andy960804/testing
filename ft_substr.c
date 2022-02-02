/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boskim <boskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:54:58 by boskim            #+#    #+#             */
/*   Updated: 2022/02/02 22:43:40 by boskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	chars_left;
	char	*res;
	size_t	i;

	if (start > ft_strlen(s))
		return (NULL);
	else
		chars_left = ft_strlen(s + start);
	if (chars_left < len)
		len = chars_left;
	res = malloc(sizeof (*res) * (len + 1));
	if (!res)
	{
		return (0);
	}
	i = 0;
	while (i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
