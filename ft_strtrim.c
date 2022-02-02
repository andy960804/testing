/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boskim <boskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:54:56 by boskim            #+#    #+#             */
/*   Updated: 2022/02/02 23:43:10 by boskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_that(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
		{
			return (1);
		}
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && is_that(s1[start], set))
		start++;
	while (end > start && is_that(s1[end - 1], set))
		end--;
	res = malloc(sizeof (*res) * (end - start + 1));
	if (!res)
		return (res);
	i = 0;
	while (i + start < end)
	{
		res[i] = s1[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
