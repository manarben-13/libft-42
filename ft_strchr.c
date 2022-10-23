/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:29:43 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/22 12:34:45 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*ptr;
    int i;

    i = 0;
    ptr = (char *)str;
	
    while (ptr[i])
    {
        if (ptr[i] == (char)c)
        {
            return (&ptr[i]);
        }
        i++;
    }
    return(NULL);
}

// int main ()
// {
 
//   printf("%s\n", ft_strchr(NULL , 'd'));
//   printf("%s\n", strchr(NULL , 'd'));
// }
//int main ()
//{
//  char *n =  "manarben";
//  char m = 'n';
  
//  printf ("%s", ft_strchr(n,m));
// }