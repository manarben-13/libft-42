/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:32:53 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/18 22:54:54 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char *ft_strdup(const char *s1)
{
  	size_t i;
  	size_t len ;
	char *ptr;
	char *str; 
  
  i = 0;
  str = (char*) s1;
  len = ft_strlen(str);
  
  ptr = (char*)malloc (sizeof(char *)*len );
  while( s1[i] )
  {
    ptr[i]= s1[i];
    i++;
  }
   ptr[i] = '\0';
  return(ptr); 
}

// int main ()
// {
//   char *s;
//   s = "manarbensaouab";
  
//   printf ("%s\n" , ft_strdup(s));
//   printf ("%s\n" , strdup(s));
// }