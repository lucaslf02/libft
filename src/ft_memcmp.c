/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:47:24 by llemes-f          #+#    #+#             */
/*   Updated: 2021/02/27 22:38:26 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s1_aux;
	unsigned char *s2_aux;

	s1_aux = (unsigned char*)s1;
	s2_aux = (unsigned char*)s2;
	if (n == 0)
		return (0);
	while (n)
	{
		if (*s1_aux != *s2_aux)
			return (*s1_aux - *s2_aux);
		s1_aux++;
		s2_aux++;
		n--;
	}
	return (0);
}
