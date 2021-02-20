/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 13:15:13 by llemes-f          #+#    #+#             */
/*   Updated: 2021/02/20 15:04:38 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t len_little;

	i = 0;
	len_little = ft_strlen(little);
	while (i < len)
	{
		if (len < (i + len_little))
			return (NULL);
		if (ft_strncmp(&big[i], little, len_little) == 0)
			return (&big[i]);
		i++;
	}
	return (NULL);
}
