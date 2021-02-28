/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 21:05:58 by llemes-f          #+#    #+#             */
/*   Updated: 2021/02/28 19:01:36 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *ptr;

	if (!nmemb || !size)
		return (NULL);
	if (!(ptr = malloc(size * nmemb)))
		return (NULL);
	ft_memset(ptr, 0, (size * nmemb));
	return (ptr);
}
