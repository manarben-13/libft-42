/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:45:18 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/14 14:44:02 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int ft_isalpha(int arg);
int ft_isdigit( int arg );
void *ft_memset(void *arr , int c , size_t n);
int isprint(int arg);
int ft_strlen(const char *str);
int ft_isascii(int arg);
void *ft_memset(void *arr , int c , size_t n);
void ft_bzero(void *s , size_t n );
char *ft_strchr(const char *str , int c); 
void *ft_memmove(void*dest, const void *src, size_t    n);
int ft_toupper (int c);
int ft_tolower (int c);
char *ft_strrchr(const char *str , int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
void *ft_memcpy(void*dest, const void *src, size_t	n);
char *ft_strchr(const char *str , int c);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strjoin(char const *s1, char const *s2);

#endif