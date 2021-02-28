/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 11:55:03 by llemes-f          #+#    #+#             */
/*   Updated: 2021/02/28 12:23:11 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/libft.h"
#include <stdio.h>

int main(void)
{
    char *nome      = ",DOM,SEG,TER,QUA,QUI,SEX,SAB";  
    char **split;
    split = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
    printf("String Split: %s \n", split[7]);    
    return 0;
	/*
	else if (arg == 2)
		check_split
	else if (arg == 3)
		check_split
	*/
	
}
