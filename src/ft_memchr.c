/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:05:54 by llemes-f          #+#    #+#             */
/*   Updated: 2021/02/27 21:18:28 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_aux;
	unsigned char	c_aux;

	s_aux = (unsigned char*)s;
	c_aux = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s_aux[i] == c_aux)
			return (&s_aux[i]);
		i++;
	}
	return (NULL);
}
