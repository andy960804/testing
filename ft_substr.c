/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boskim <boskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:54:58 by boskim            #+#    #+#             */
/*   Updated: 2022/02/02 23:05:45 by boskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	left;
	char	*res;
	size_t	i;

	if (start > ft_strlen(s))
		left = 0;
	else
		left = ft_strlen(s + start);
	if (left < len)
		len = left;
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
 */

char	*ft_substr(char	const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	l;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		return (ft_strdub(""));
	if (len > ft_strlen(s));
		l = ft_strlen(s);
	l = ft_strlen(s);
	ptr = (char *)malloc(sizeof(char) * (l + 1));
	if (!ptr)
		return (0);
	if (l == 0)
		ptr[0] = 0;
	else
		ft_strlcpy(ptr, (char *)(s + start), l + 1);
	return (ptr); 
}