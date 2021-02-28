/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 21:25:21 by llemes-f          #+#    #+#             */
/*   Updated: 2021/02/28 18:44:05 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char	*ft_strdup(const char *s)
{
	char	*s_aux;
	int		len;
	int		i;

	len = ft_strlen(s) + 1;
	s_aux = (char *)malloc(len * sizeof(char));
	if (!s_aux)
		return (NULL);
	i = 0;
	while (s[i])
	{
		s_aux[i] = s[i];
		i++;
	}
	s_aux[i] = '\0';
	return (s_aux);
}
