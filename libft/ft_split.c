/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 20:58:02 by llemes-f          #+#    #+#             */
/*   Updated: 2021/03/01 21:28:12 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			number_str(char const *s, char c)
{
	size_t n_str;
	size_t jump;

	word_count = 0;
	jump = 1;
	while (*s)
	{
		if (*s != c && jump)
		{
			jump = 0;
			s++;
			n_str++;
		}
		else if (*s++ == c)
			jump = 1;
	}
	return (n_str);
}

static char const	*skip_equal_chars(char const *s, char c)
{
	while (*s && *s == c)
		s++;
	return (s);
}

static void			create_words(
	char **words, char const *s, char c, size_t word_count)
{
	char *pointerator;

	s = skip_equal_chars(s, c);
	while (word_count--)
	{
		pointerator = ft_strchr(s, c);
		if (pointerator != NULL)
		{
			*words = ft_substr(s, 0, pointerator - s);
			s = skip_equal_chars(pointerator, c);
		}
		else
			*words = ft_substr(s, 0, ft_strlen(s) + 1);
		words++;
	}
	*words = NULL;
}

char				**ft_split(char const *s, char c)
{
	size_t	word_count;
	char	**words;

	if (s == NULL)
		return (NULL);
	word_count = number_str(s, c);
	words = malloc(sizeof(char **) * (word_count + 1));
	if (words == NULL)
		return (NULL);
	create_words(words, s, c, word_count);
	return (words);
}
