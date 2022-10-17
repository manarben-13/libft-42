/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:43:02 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/16 19:29:27 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_set (char *s1 , char *set )
{
  int i;
  i = 0;
  
  while (s1[i] && set [i])
  {
    if(s1[i] == set[i])
    {
      s1[i];
    }
    else 
    {
      i++;
    }
    return(s1);
  }
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *ptr;
    unsigned char *str;
    int len;
    int i;
    
    i = 0;
    str = ft_set (s1, set);
    len = ft_strlen(str);
    ptr = (char*)malloc(len*sizeof(char) + 1);
    if(!ptr)
        return(NULL);
        while (str[i] )
        {
          ptr[i] = str[i];
          i++;
        }
        return(ptr);
}
    
}
int main ()
{
    char *m;
    char *r;
    char *n;
    m = "manar123";
    r = "na";
    n = ft_strtrim(m,r);
    printf("%s", n);

}