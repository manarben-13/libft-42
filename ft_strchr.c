/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:29:43 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/11 11:42:16 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str , int c)
{
    char    *ptr;
    int i;

    i = 0;
    ptr = (char *)str;
    if (!ptr)
        return (NULL);
    while (ptr[i] )
    {
        if (ptr[i] == c)
        {
            return (&ptr[i]);
        }
        i++;
    }
    return(ptr);
}

int main ()
{
 
  printf("%s", ft_strchr("manar" , 'n'));
}
//int main ()
//{
//  char *n =  "manarben";
//  char m = 'n';
  
//  printf ("%s", ft_strchr(n,m));
// }