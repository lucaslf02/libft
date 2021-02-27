/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 18:00:15 by llemes-f          #+#    #+#             */
/*   Updated: 2021/02/27 18:04:50 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *node;

	if (!(node = (t_list*)malloc(sizeof(*node))))
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
