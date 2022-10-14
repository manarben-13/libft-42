/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:16:18 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/14 12:29:02 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    unsigned char *str1;
    unsigned char *str2;
    size_t i ;
    size_t j;
    
    str1 = (unsigned char*)haystack;
    str2 = (unsigned char*)needle;
    i = 0;

    if(!str2)
        return(str1);
    while(str1[i]&& i < len )
    {
        j = 0;
        while (str1[i]&& str2[j]&& str1[i] == str2[j])
        {
            i++;
            j++;
        }
        if(str2[j] == '\0');
        	return(str1[j-i]);
        j = j - i + 1;
    }
  return(0);
}


int main()
{
    char *m ="mery manar 1337";
    char *n = "manar";
    char *ptr = ft_strnstr(m,n,12);
    printf("%s", ptr );
}