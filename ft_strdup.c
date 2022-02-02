/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boskim <boskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:54:38 by boskim            #+#    #+#             */
/*   Updated: 2022/02/02 20:11:02 by boskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	res = malloc(sizeof (*res) * (len + 1));
	if (!res)
	{
		return (res);
	}
	i = 0;
	while (i < len)
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
