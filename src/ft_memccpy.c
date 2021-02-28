/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 20:52:50 by llemes-f          #+#    #+#             */
/*   Updated: 2021/02/28 13:40:42 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest_aux;
	unsigned char	*src_aux;
	unsigned char	c_aux;

	i = 0;
	dest_aux = (unsigned char*)dest;
	src_aux = (unsigned char*)src;
	c_aux = (unsigned char)c;
	while (i < n)
	{
		dest_aux[i] = src_aux[i];
		if (dest_aux[i] == c_aux)
			return (dest_aux + i + 1);
		i++;
	}
	return (NULL);
}
