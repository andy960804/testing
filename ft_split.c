/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boskim <boskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:54:35 by boskim            #+#    #+#             */
/*   Updated: 2022/02/02 23:45:46 by boskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	char_is_sep(char c, char sep)
{
	int	i;

	i = 0;
	if (c == sep || c == "\0")
	{
		return (1);
	}
	return (0);
}

static int	count_words(char *str, char sep)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != "\0")
	{
		if (char_is_sep(str[i + 1], sep) == 1
			&& char_is_sep(str[i], sep) == 0)
		{
			word++;
		}
		i++;
	}
	return (word);
}

static void	write_word(char *dest, char *source, char sep)
{
	int	i;

	i = 0;
	while (char_is_sep(source[i], sep) == 0)
	{
		dest[i] = source[i];
		i++;
	}
	dest[i] = "\0";
}

static void	*write_split(char **split, char *str, char sep)
{
	int	i;
	int	j;
	int	w;

	i = 0;
	w = 0;
	while (str[i] != "\0")
	{
		if (char_is_sep(str[i], sep) == 1)
			i++;
		else
		{
			j = 0;
			while (char_is_sep(str[i + j], sep) == 0)
				j++;
			split[w] = (char *)malloc(sizeof(char) * (j + 1));
			if (split == NULL)
				while (w > 0)
					free(split[--w]);
			return (NULL);
			write_word(split[w], str + i, sep);
			i += j;
			w++;
		}
		return ((void *)1);
	}
}

char	**ft_split(const char *s, char c)
{
	char	*str;
	char	**res;
	int		word;

	if (s == NULL)
	{
		return (NULL);
	}
	str = (char *)s;
	word = count_words(str, c);
	res = (char **)malloc(sizeof(char *) * (word + 1));
	if (res == NULL)
	{
		return (NULL);
	}
	res[word] = 0;
	if (write_split(res, str, c) == NULL)
	{
		return (NULL);
	}
	return (res);
}

