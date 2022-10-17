/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:37:03 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/17 19:15:57 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_edit(unsigned int i ,char c)
{
    
   c += i;
    return(c);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    unsigned int len;
    char *str;
    char *ptr;
    
    str = (char *)s;
    i = 0;
    len = strlen(str);
    ptr = (char*)malloc(len*sizeof(char) + 1);
    if(!ptr)
        return(NULL);
    while(str[i])
    {
        ptr[i] = f(i, s[i]);
    }
    ptr[i] = '\0';
    return(ptr);
    
}

int main ()
{
    char *n = "manar";
	char *s;
	s = ft_strmapi(n, ft_edit(unsigned int, char));
    printf("%s\n", s);
}