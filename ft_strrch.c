/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:09:14 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/09 16:21:40 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str , int c)
{
    char    *ptr;
    int len;

    ptr = (char *)str;
    len = ft_strlen(ptr);
    if (!ptr)
        return (NULL);
    while (len > 0)
    {
        if (ptr[len] == c)
        {
            return (&ptr[len]);
        }
        len--;
    }
    return(ptr);
}

//int main ()
//{
 
//  printf("%s", ft_strrchr("manar" , 'a'));
//}