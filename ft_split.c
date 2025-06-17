/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkorpela <kkorpela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:30:14 by kkorpela          #+#    #+#             */
/*   Updated: 2025/05/05 15:18:57 by kkorpela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_delim(char ch, char c)
{
	return (ch == c);
}

static int	count_words(const char *str, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (!is_delim(*str, c) && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (is_delim(*str, c))
			in_word = 0;
		str++;
	}
	return (count);
}

static char	*get_word(const char **s, char c)
{
	const char	*start;
	size_t		len;
	char		*word;

	len = 0;
	start = *s;
	while ((*s)[len] && !is_delim((*s)[len], c))
		len++;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	ft_memcpy(word, start, len);
	word[len] = '\0';
	*s += len;
	return (word);
}

static void	cleanup(char **arr, int size)
{
	while (size-- > 0)
		free(arr[size]);
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char		**result;
	size_t		i;
	size_t		words;

	i = 0;
	if (!s)
		return (NULL);
	words = count_words(s, c);
	result = malloc(sizeof(*result) * (words + 1));
	if (!result)
		return (NULL);
	while (i < words)
	{
		while (is_delim(*s, c))
			s++;
		result[i] = get_word(&s, c);
		if (!result[i])
		{
			cleanup(result, i);
			return (NULL);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}
