/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:08:38 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/30 16:39:12 by mben-sal         ###   ########.fr       */
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

void    ft_free(char **s)
{
    int    i;

    i = 0;
    while (s[i])
	{
        free(s[i++]);
	}
    free(s);
}

char *alloc_words(char *s , int start , int finish)
{
	int		i;
	char	*word;
	
	i = 0;
	word = (char*) malloc ( sizeof (*s) * ( finish - start )+ 1);
	if(!word)
		return(NULL);
	while( s[i] && start < finish )
	{
		word[i] = s[start];
		start ++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

char **ft_split(char const *s, char c)
{
    size_t i;
    size_t j;
    size_t len;
    int index;
    int count;
    char **ptr;

    i = 0;
    j = 0;
    if (!s)
      return (NULL);
    len = ft_strlen(s);
    index = -1;
    count = ft_word_count((char*)s, c);
    ptr = malloc(sizeof(char *)*(count + 1));
    if(!ptr)
	  return (NULL);
    while(i <= len )
    {
		if (s[i] != c && index < 0)
			index  = i;
		else if ((s[i] == c || i == len ) && index >= 0)
		{
			ptr[j] = alloc_words((char*)s , index , i );
			if (!ptr[j])
			{
				ft_free(ptr);
				return (NULL);
			}
			j++;
			index = -1; 
		}
		i++;
	}
	ptr[j] = NULL;
	return (ptr);
}

// int main ()
// // {
// //   char *m = "                  olol";
// //   char **n =  ft_split(m, ' ' );
// //   int i;
// //   i = 0;
// //   while ( n[i] )
// //     {
// //       printf("%s\n", n[i]);
// //       i++;
// //     }
// // }