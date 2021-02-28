/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 15:16:32 by llemes-f          #+#    #+#             */
/*   Updated: 2021/02/27 21:22:44 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	begin;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	begin = 0;
	end = ft_strlen(s1) - 1;
	while (s1[begin] != '\0' && (char *)ft_strchr(set, s1[begin]))
		begin++;
	while (end && (char *)ft_strchr(set, s1[end]))
		end--;
	len = (end - begin) + 1;
	return (ft_substr(s1, begin, len));
}
