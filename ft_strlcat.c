/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:25:51 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/12 20:03:06 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 size_t ft_strlcat(char *dst, const char *src, size_t size)
 {
     size_t i;
     size_t len_d;
     size_t len_s;
     char *s;

     i = 0;
 	s = (char *)src;
     len_d = ft_strlen(dst);
     len_s = ft_strlen(src);
 	if (len_d <= size)
 		return(len_s + size);
 	size = size - len_d;
	len_d--;
     while (len_d + i < size -1 )
	 {
         dst[len_d + i ] = s[i];
         i++;
     }
     dst[len_d+i]= '\0';
     return(len_d +len_s);
    
 }

int main() 
{
	char *d = "hello world";
	char *s = "manar";
	size_t i = ft_strlcat(d, s, 10);
	printf("%zu\n", i);
	d = "hello world";
	s = "manar";
	i = strlcat(d, s, 10);
	printf("%s\n", d);
}