/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 11:55:03 by llemes-f          #+#    #+#             */
/*   Updated: 2021/02/14 16:36:04 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int main(void)
{
    // /*Teste 1 - Nenhuma ocorrencia*/
    char *nome1      = "Lucas";  
    printf("Teste 1 - Nenhuma ocorrencia ---> ");
    printf("Strrchr: %s \n", ft_strrchr(nome1, 'k'));
    /*Teste 2 - Uma unica ocorrencia*/
    char *nome2      = "Lucas";
    printf("Teste 2 - Uma unica ocorrencia ---> ");
    printf("Strrchr: %s \n", ft_strrchr(nome2, 's'));      
    /*Teste 3 - Varias ocorrencias*/
    char *nome3      = "ssLucasss";  
    printf("Teste 3 - Varias ocorrencias ---> ");
    printf("Strrchr: %s \n", ft_strrchr(nome3, 's'));
    /*Teste 4 - Terminator como parametro*/
    char *nome4      = "Lucas";  
    printf("Teste 4 - Terminator como parametro ---> ");
    printf("Strrchr: %s \n", ft_strrchr(nome4, '\0'));
    return 0;
}
