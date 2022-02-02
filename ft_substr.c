/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boskim <boskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:54:58 by boskim            #+#    #+#             */
/*   Updated: 2022/02/02 23:28:53 by boskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	l;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
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