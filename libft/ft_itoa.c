/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 21:09:14 by llemes-f          #+#    #+#             */
/*   Updated: 2021/03/02 21:47:16 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

int		get_len(int n)
{
	int len;

	len = 0;
	if (n < 0)
	{
		n = n * (-1);
		len++;
	}		
	while (n > 0)
	{
		n /= 10;
		len++;
	}		
	return (len);
}

char	*ft_itoa(int n)
{
	char			*nbr;
	char			*nbr_ptr;
	int				len;
	unsigned int	aux;

	len = get_len(n);	
	aux = n < 0 ? n * (-1) : n;
	if (!(nbr = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	nbr_ptr = nbr;
	if (n < 0)
	{
		*nbr++ = '-';
		len--;
	}
	while (len)
	{
		*nbr++ = ((aux / ft_pow(10, len)) + 48);
		aux %= ft_pow(10, len--);
	}
	*nbr = '\0';
	return (nbr_ptr);
}
