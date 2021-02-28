/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 20:58:02 by llemes-f          #+#    #+#             */
/*   Updated: 2021/02/27 21:13:49 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

static size_t	number_str(char const *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	acc;
	size_t	n_str;

	len = ft_strlen(s);
	i = 0;
	n_str = 0;
	acc = 0;
	while (i <= len)
	{
		if (s[i] != c)
			acc = 1;
		if ((s[i] == c || s[i] == '\0') && acc == 1)
		{
			acc = 0;
			n_str++;
		}
		i++;
	}
	return (n_str);
}

static char		*scissor(char const *s, char const c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (ft_substr(s, 0, (i)));
}

static char		**wipe_tab(char **tab)
{
	size_t i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab[i]);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**tab;

	if (!s)
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char) * ((number_str(s, c) + 1)))))
		return (NULL);
	i = 0;
	j = 0;
	while (*s != '\0')
	{
		while (s[i] != c && s[i] != '\0')
			i++;
		if (!(tab[j] = scissor(s, c)) && i > 0)
			return (wipe_tab(tab));
		s = s + i + 1;
		i = 0;
		j++;
	}
	tab[j - 1] = NULL;
	return (tab);
}
