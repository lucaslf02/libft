/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 20:58:02 by llemes-f          #+#    #+#             */
/*   Updated: 2021/03/06 12:48:22 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

static int			number_str(char const *s, char c)
{
	size_t n_str;
	size_t jump;

	n_str = 0;
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

static char const	*jump_char(char const *s, char c)
{
	while (*s && *s == c)
		s++;
	return (s);
}

static void			tab_gen(char **tab, char const *s, char c, size_t len_tab)
{
	char *i_poiter;

	s = jump_char(s, c);
	while (len_tab--)
	{
		i_poiter = ft_strchr(s, c);
		if (i_poiter != NULL)
		{
			*tab = ft_substr(s, 0, (i_poiter - s));
			s = jump_char(i_poiter, c);
		}
		else
			*tab = ft_substr(s, 0, ft_strlen(s));
		tab++;
	}
	*tab = NULL;
}

char				**ft_split(char const *s, char c)
{
	size_t	len_tab;
	char	**tab;

	if (s == NULL)
		return (NULL);
	len_tab = number_str(s, c);
	tab = (char **)malloc(sizeof(char **) * (len_tab + 1));
	if (tab == NULL)
		return (NULL);
	tab_gen(tab, s, c, len_tab);
	return (tab);
}
