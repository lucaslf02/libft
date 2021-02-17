/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 11:55:03 by llemes-f          #+#    #+#             */
/*   Updated: 2021/02/14 18:14:07 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>


int main(void)
{
    char nome[] = "Lucas";
    char *set = " ";
    char *strtrim;
    strtrim = ft_substr(nome, 2, 4);
    printf("Antes do strtrim: %s \n", nome);
    printf("Apos o strtrim: %s \n", ft_substr("lucas", 2, 4));
    return 0;
}
