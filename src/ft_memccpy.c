/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 20:52:50 by llemes-f          #+#    #+#             */
/*   Updated: 2021/02/18 20:51:26 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int		i;
	void	*dest_aux;

	i = 0;
	dest_aux = dest;
	while (i < n)
	{
		((char*)dest)[i] = ((char*)src)[i];
		if (((char*)src)[i] == (char*)c)
			return (dest_aux);
		i++;
	}
	return (dest_aux);
}
