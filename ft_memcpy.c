/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:11:54 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/08 14:38:24 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void*dest, const void *src , size_t n )
{
	unsigned char *d; 
    unsigned char *s;
    size_t i;
    
    d = dest; 
    s = src;
    i = 0;
    
    while (d[i] && s[i] && i < n )
    {
      d[i] = s[i];
	  i++;
	}
	return(d);
}

//int main ()
//{
//	char n [] = "manar";
//	char r [] = "sa";
//	char *s;
//	s = ft_memcy(d,r,2);	
//	printf("%s", s );
//}