/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:40:21 by llemes-f          #+#    #+#             */
/*   Updated: 2021/02/18 20:41:14 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	char	*dest_aux;
	char	*src_aux;

	i = 0;
	dest_aux = (char*)dest;
	src_aux = (char*)src;
	if (dest_aux < src_aux)
		while (n >= 0)
		{
			dest_aux[n] = src_aux[n];
			n--;
		}
	else
		while (i < n)
		{
			dest_aux[i] = src_aux[i];
			i++;
		}
	return (dest);
}
