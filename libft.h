/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:45:18 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/08 12:44:43 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int ft_isalpha(int arg);
int ft_isdigit( int arg );
void *ft_memset(void *arr , int c , size_t n);
int isprint(int arg);
int ft_strlen(char *str);
int ft_isascii(int arg);
void *ft_memset(void *arr , int c , size_t n);
void ft_bzero(void *s , size_t n );

#endif