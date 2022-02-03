/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boskim <boskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:54:35 by boskim            #+#    #+#             */
/*   Updated: 2022/02/03 11:52:01 by boskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*strdup_partial(char const *s, size_t start, size_t end)
{
	char	*word;
	size_t	i;

	word = malloc(sizeof (*word) * (end - start + 1));
	if (!word)
	{
		return (word);
	}
	i = 0;
	while (s[start + i] && start + i < end)
	{
		word[i] = s[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	get_free(char **words, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		free(words[i]);
		i++;
	}
	free(words);
}

static size_t	ft_num_of_words(char const *s, char c)
{
	size_t	i;
	size_t	number_of_words;

	number_of_words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (s[i + 1] == c || s[i + 1] == '\0')
			{
				number_of_words++;
			}
		}
		i++;
	}
	return (number_of_words);
}

static void	find_word(char const *s, size_t *i, size_t *j, char c)
{
	while (s[*i] == c)
	{
		(*i)++;
	}
	*j = *i;
	while (s[*j] && s[*j] != c)
	{
		(*j)++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	num_words;
	size_t	word_index;
	size_t	i;
	size_t	j;

	num_words = ft_num_of_words(s, c);
	words = malloc(sizeof (*words) * (num_words + 1));
	if (!words)
		return (NULL);
	word_index = -1;
	i = 0;
	while (++word_index < num_words)
	{
		find_word(s, &i, &j, c);
		words[word_index] = strdup_partial(s, i, j);
		if (!words[word_index])
		{
			get_free(words, word_index);
			return (NULL);
		}
		i = j;
	}
	words[word_index] = NULL;
	return (words);
}
