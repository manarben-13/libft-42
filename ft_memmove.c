/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:38:43 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/10 17:10:48 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void*dest, const void *src, size_t    n)
{
    unsigned char    *d; 
    unsigned char    *s;
    size_t            i;
    d = (unsigned char*)dest;
    s = (unsigned char*)src;
    i = 0;
	

    if (dest > src)
    {
      while (d[i] && s[i] && i < n)
      {
          d[i] = s[i];
          i++;
      }
    }
    else
    {
      while (n > 0)
      {
        d[n] = s[n];
        n--;
      }
    }
    return (d);
}

int main ()
{
    char n [] = "1337 is a school";
    char *s;
    s = ft_memmove(n + 3, n, 3);
    printf("%s\n", s );
	s = memmove(n + 3, n, 3);
    printf("%s", s );
}