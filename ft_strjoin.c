/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:35:15 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/14 16:41:24 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    
    int len1;
    int len2;
    int len;
    int i;
    int j;
    char *ptr;
    
	 if (!s1 || !s2 )
	 	return (NULL);
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    len = len1 + len2;
    ptr = (char*)malloc(len*sizeof(char) + 1);
	if (!ptr)
		return(NULL);
    i = 0;
    j = 0;
    while (s1[i])
    {
        ptr[j] = s1[i];
        i++;
        j++;
    }
    i = 0;
    while (s2[i])
    {
        ptr[j] = s2[i];
        i++;
        j++;
    }
    ptr[j] ='\0';
    return(ptr);
}

int main ()
{
  char *a = "manar";
  char *b = "1337";
  char *m = ft_strjoin(a,b);
  printf("%s", m);
}
