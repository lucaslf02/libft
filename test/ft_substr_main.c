/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 11:55:03 by llemes-f          #+#    #+#             */
/*   Updated: 2021/02/14 18:18:58 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>
#include "../libft.h"

int main(void)
{
    char *nome = "Lucas Lemes";
    char *substr;
    substr = ft_substr(nome, 1, 5);
    printf("Antes do substr: %s \n", nome);
    printf("Apos o substr: %s \n", substr);
    return 0;
}
