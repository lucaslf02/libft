/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 21:09:14 by llemes-f          #+#    #+#             */
/*   Updated: 2021/03/03 22:14:31 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

int		get_len(int n)
{
	int				len;
	unsigned int	aux;

	len = 0;
	aux = n < 0 ? n * (-1) : n;
	if (n < 0)
		len++;
	while (aux > 0)
	{
		aux /= 10;
		len++;
	}
	return (len ? len : 1);
}

char	*ft_itoa(int n)
{
	char			*nbr;
	int				i;
	int				len;
	unsigned int	aux;

	len = get_len(n);
	aux = n < 0 ? n * (-1) : n;
	if (!(nbr = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	if (n < 0)
		nbr[i++] = '-';
	len--;
	while (i <= (len))
	{
		nbr[i] = ((aux / ft_pow(10, (len - i))) + 48);
		aux %= ft_pow(10, (len - i));
		i++;
	}
	nbr[i] = '\0';
	return (nbr);
}
