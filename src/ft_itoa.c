/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 21:09:14 by llemes-f          #+#    #+#             */
/*   Updated: 2021/02/25 22:16:05 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "stdlib.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	char			*nbr;
	char			*nbr_ptr;
	int				len;
	unsigned int	aux;

	aux = n < 0 ? n * (-1) : n;
	len = 0;
	while ((aux /= 10) > 0)
	{
		len++;
	}
		
	len = n < 0 ? (len + 1) : len;
	aux = n < 0 ? n * (-1) : n;
	if(!(nbr = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	nbr_ptr = nbr;
	if(n < 0)
	{
		*nbr++ = '-';
		len--;
	}
	printf("len: %i\n", len);
	while (len != -1)
	{
		printf("aux: %i \n", aux);
		printf("len: %i\n", len);
		printf("ft_pow: %i\n", ft_pow(10, len));
		printf("char: %d\n\n", ((aux / ft_pow(10, len)) + 48));
		*nbr++ = ((aux / ft_pow(10, len)) + 48);
		aux %= ft_pow(10, len--);		
	}
	*nbr = '\0';
	return (nbr_ptr);
}

