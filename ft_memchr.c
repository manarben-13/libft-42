/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:03:19 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/12 10:22:14 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 void *ft_memchr(const void *s, int c, size_t n)
 {
	unsigned char *ptr;
	size_t i;
	
	i = 0;
	ptr = (unsigned char*)s;
	while(i < n)
	{
		if(ptr[i]== (unsigned char)c)
		{
			return(&ptr[i]);
		}
		i++;
	}
	return(NULL);
}
int main ()
 {
   char n[] = "";
   int m = 'h';
   printf("%s\n" , ft_memchr(n,m,3));
   printf("%s" , memchr(n,m,3));
 }

