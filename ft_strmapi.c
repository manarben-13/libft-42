/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:37:03 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/29 16:07:48 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char ft_edit(unsigned int i ,char  c)
// {
//     i = 0;
//    c += i;
//     return(c);
// }

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    unsigned int len;
    char *str;
    char *ptr;
    
    str = (char *)s;
	if (!str)
		return NULL;
    i = 0;
    len = ft_strlen(str);
    ptr = (char*)malloc(len*sizeof(char) + 1);
    if(!ptr)
        return(NULL);
    while(str[i])
    {
        ptr[i] = f(i, s[i]);
		i++;
    }
    ptr[i] = '\0';
    return(ptr);
    
}

// int main ()
// {
//     char n[] = "manar";
// 	ft_strmapi(n, ft_edit());
//     printf("%s\n", n);
// }