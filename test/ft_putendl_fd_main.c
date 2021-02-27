/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 11:55:03 by llemes-f          #+#    #+#             */
/*   Updated: 2021/02/27 11:08:37 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "stdio.h"

int main(void)
{
    FILE *inp;
    inp = fopen("/home/lucas/Documentos/entrada.txt","w");
    ft_putendl_fd("Lucas Lemes Ferreira", fileno(inp));
    fclose(inp);
}
