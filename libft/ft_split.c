/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 20:58:02 by llemes-f          #+#    #+#             */
/*   Updated: 2021/02/28 17:28:54 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		number_str(char const *s, char c)
{
	int	i;
	int	n_str;

	i = 0;
	n_str = 0;
	if (s[i] == '\0')
		return (0);
	while (s[i + 1])
	{
		if (s[i] == c && s[i + 1] != c)
			n_str++;
		i++;
	}
	if (s[i] != c)
		n_str++;
	return (n_str);
}

char	**wipe_tab(char **tab)
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

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**tab;

	if (!s)
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char*) * ((number_str(s, c) + 1)))))
		return (NULL);
	i = 0;
	j = 0;
	while (*s)
	{
		while (s[i] != c && s[i])
			i++;
		if (i > 0)
			if (!(tab[j] = ft_substr(s, 0, i)))
				return (wipe_tab(tab));
		s = i > 0 ? s + i : s + 1;
		j = i > 0 ? j + 1 : j;
		i = 0;
	}
	tab[j + 1] = NULL;
	return (tab);
}
