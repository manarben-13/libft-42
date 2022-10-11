/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:25:51 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/11 12:52:53 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t len_d;
    size_t len_s;
    unsigned char *d;
    unsigned char *s;
    
    i = 0;
	s = (char *)src;
	
    
    
    
    len_d = ft_strlen(dst);
    len_s = ft_strlen(src);
    
    while (len_d + i < dstsize -1 )
    {
        d[len_d + i ] = s[i];
        i++;
    }
    d[len_d+i]= '\0';
    return(len_d +len_s);
    
}

int main() 
{
	char n[] = "manar";
	char m[] = "mery";
	printf("%zu\n", ft_strlcat(n, m, 10));
	printf("%s", n);
}