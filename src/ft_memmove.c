/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:40:21 by llemes-f          #+#    #+#             */
/*   Updated: 2021/02/27 22:47:12 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	int		aux_n;
	char	*dest_aux;
	char	*src_aux;

	i = 0;
	aux_n = (int)(n - 1);
	dest_aux = (char*)dest;
	src_aux = (char*)src;
	if (dest_aux > src_aux)
		while (aux_n >= 0)
		{
			dest_aux[aux_n] = src_aux[aux_n];
			aux_n--;
		}
	else
		while (i < n)
		{
			dest_aux[i] = src_aux[i];
			i++;
		}
	return ((void*)dest);
}
