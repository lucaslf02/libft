/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 11:30:20 by llemes-f          #+#    #+#             */
/*   Updated: 2021/03/02 21:21:16 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int				multiple;
	int				number;
	unsigned int	aux;
	unsigned int	aux_nb;

	aux = n;
	if (n < 0)
	{
		aux = n * (-1);
		ft_putchar_fd(&"-", fd);
	}
	multiple = 1;
	aux_nb = aux;
	while ((aux_nb /= 10) > 0)
		multiple *= 10;
	while (multiple)
	{
		number = ((aux / multiple) + 48);
		ft_putchar_fd(&number, fd);
		aux %= multiple;
		multiple /= 10;
	}
}
