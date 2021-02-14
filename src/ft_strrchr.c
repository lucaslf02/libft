/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 15:51:48 by llemes-f          #+#    #+#             */
/*   Updated: 2021/02/14 16:28:18 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	while (*s)
	{
		if (*s == (char)c)
			str = (char*)s;
		s++;
	}
	if (*s == (char)c)
		str = (char*)s;
	if (*str)
		return (str);
	return (NULL);	
}