/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 11:55:03 by llemes-f          #+#    #+#             */
/*   Updated: 2021/02/14 11:55:09 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>
#include "../src/ft_substr.c"

char	*ft_substr(char const *s, unsigned int start, size_t len);

int main(void)
{
    char *nome = "Lucas Lemes";
    char *substr;
    substr = ft_substr(nome, 0, 5);
    printf("Antes do substr: %s \n", nome);
    printf("Apos o substr: %s", substr);
    return 0;
}
