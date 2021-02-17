/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 15:16:32 by llemes-f          #+#    #+#             */
/*   Updated: 2021/02/14 18:11:07 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t 	begin;
	size_t	end;
	char	*trim;

	if (!(s1) || !(set))
		return (NULL);
	begin = 0;
	end = (ft_strlen(s1));
	while (s1[begin] && ft_strrchr(set, s1[begin]))
		begin++;
	while ((end > 0) && ft_strrchr(set, s1[end]))
		end--;
	trim = ft_substr(s1, begin, end+1);
	return (trim);
}
