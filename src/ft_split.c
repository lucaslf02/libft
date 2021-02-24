/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 20:58:02 by llemes-f          #+#    #+#             */
/*   Updated: 2021/02/23 21:31:47 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	**ft_split(char const *s, char c)
{
	
}

int		number_str(char const *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	acc;
	size_t	n_str;

	len = ft_strlen(s);
	i = 0;
	n_str = 0;
	acc = 0;
	while (i < len)
	{
		if (s[i] != c)
			acc = 1;
		if (s[i] == c && acc == 1)
		{
			acc = 0;
			n_str++;
		}
		i++;
	}	
	return (n_str);
}
