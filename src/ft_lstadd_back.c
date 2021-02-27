/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 18:37:07 by llemes-f          #+#    #+#             */
/*   Updated: 2021/02/27 18:43:01 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *aux;

	if (lst && new)
	{
		if (!(*lst))
			*lst = new;
		else
		{
			aux = ft_lstlast(*lst);
			aux->next = new;
		}
	}
}
