/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:08:38 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/23 19:34:28 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lettre( char *s , char c  )
{
  int i;
  int lettre; 
  
  lettre = 0;
  i = 0;
  
  while ( s[i] != '\0' )
  {
    while (
  
  while (s[i]

int ft_word_count(char *str , char c)
{
  
    int i;
    int count;

    i = 0;
    count = 0;
    if(!str)
      return(0);
    while (str[i])
    {
        while( str[i] != 0 && str[i] == c )
        {
            i++;
        }
        if (str[i])
        count = count +1;
        while (str[i] != 0 && str[i] != c )
        {
            i++;
        }
        while( str[i] != 0 && str[i] == c )
        {
            i++;
        }
    }
    return(count);
}

char **ft_split(char const *s, char c)
{
    int i;
    int len;
    int count;
    char **ptr;

    i = 0;
    count = ft_word_count ( s , c );
    ptr = malloc(sizeof(char *)*(count + 1));
    if(!ptr)
      return(NULL);
    while(i < count)
    {
		len = ft_lettre(ptr[i], )
		i++;
	}
    
}

int main ()
{
  char *m = " manar  123 ben ";
  printf("%d", ft_split(m, ' '));
}