/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 16:15:07 by pbillett          #+#    #+#             */
/*   Updated: 2021/03/05 22:05:25 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	if (!s)
		return (NULL);
	i = 0;
	if (!(substr = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);	
	while (i < len && start < ft_strlen(s))
		substr[i++] = s[start++];	
	substr[len] = '\0';
	return (substr);
}
