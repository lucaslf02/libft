/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 16:15:07 by pbillett          #+#    #+#             */
/*   Updated: 2021/02/17 20:41:46 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "stdlib.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;
	if (len == 0)
		return (NULL);
	i = 0;
	substr = (char *)malloc(sizeof(char) * len);
	if (!substr)
		return (NULL);
	while (i < len && s[i] != '\0')
	{
		substr[i] = s[i + start];
		i++;
	}
	return (substr);
}
