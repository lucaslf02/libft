/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 13:55:31 by llemes-f          #+#    #+#             */
/*   Updated: 2021/02/17 22:23:02 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>

size_t	ft_strlen(char const *s);
char	*ft_strrchr(const char *s, int c);
int islower(int c);
int isupper(int c);
int ft_isdigit(int c);
int ft_isalpha(int c);
int	ft_isalnum(int c);
int	isascii(int c);
int	isprint(int c);
int	tolower(int c);
int	toupper(int c);
void    ft_bzero(void *s, size_t length);
void	*memccpy(void *dest, const void *src, int c, size_t n);
void	*memcpy(void *dest, const void *src, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);

#endif