/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 16:15:07 by pbillett          #+#    #+#             */
/*   Updated: 2021/03/06 12:23:04 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*substr;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	i = 0;
	if (!(substr = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (start > s_len)
	{
		substr[0] = '\0';
		return (substr);
	}
	while (i < len && start < s_len)
		substr[i++] = s[start++];
	substr[len] = '\0';
	return (substr);
}
