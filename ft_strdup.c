/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:32:53 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/26 20:42:30 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t i;
	size_t len;
	char *ptr;
	char *str; 

	i = 0;
	str = (char*) s1;
	if (!s1)
		return NULL;
	len = ft_strlen(str);
	printf("%zu\n", len);
	ptr = (char*)malloc(sizeof(char *) * len + 1);
	if (!ptr)
		return NULL;
	while( s1[i] )
	{
		ptr[i]= s1[i];
		i++;
	}
	ptr[i] = '\0';
	return(ptr); 
}

int main ()
{
  char *s;
  s = "";
  char *s1 = ft_strdup(s);
  char *s2 = strdup(s);
  
  printf ("%s\n%lu\n", s1, strlen(s1));
  printf ("%s\n%lu\n", s2, strlen(s2));
}