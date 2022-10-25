/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:08:38 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/24 19:41:11 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char *alloc_words(char *s , int start , int finish)
{
  int i;
  char *word;
  
  i = 0;
  
  word =(char*) malloc ( sizeof (*s) * ( finish - start )+ 1);
  while( s[i] && start < finish )
  {
    word[i] = s[start];
    
    start ++;
    i++;
  }
  word[i] = '\0';
  return(word);
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