/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:45:18 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/10 15:36:22 by mben-sal         ###   ########.fr       */
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

#endif