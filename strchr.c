/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:55:20 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/09 10:52:25 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
char *ft_strchr(const char *str , int c)
{
	char	*ptr;
    int i;

    i = 0;
	ptr = (char *)str;
	if (!ptr)
		return (NULL);
    while (ptr[i] )
    {
        if (ptr[i] == c)
        {
			return (&ptr[i]);
        }
        i++;
    }
    return(ptr);
}

int main ()
{
 
  printf("%s", ft_strchr("manar" , 'n'));
}
//int main ()
//{
//  char *n =  "manarben";
//  char m = 'n';
  
//  printf ("%s", strchr(n,m));
// }