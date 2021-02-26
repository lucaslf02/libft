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

char	*ft_itoa(int n)
{
	char			*nbr;
	char			*nbr_ptr;
	int				len;
	unsigned int	aux;

	aux = n < 0 ? n * (-1) : n;
	len = 0;
	while ((aux /= 10) > 0)
		len++;
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
	while (len--)
	{
		*nbr++ = ((aux / ft_pow(10, len)) + 48);
		aux %= ft_pow(10, len);		
	}
	
}

