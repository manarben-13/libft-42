/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:16:18 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/19 18:30:31 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char *str1;
	char *str2;
	size_t i;
	size_t j;
	
	i = 0;
	str1 = (char*)haystack;
	str2 = (char*)needle;
	
	if (!str2)
	{
		return(str1);
	}
	while (i< len)
	{
		j = 0;
		while (str1[i+j] == str2[j])
		{
			if(!str2[j+1])
			{
				return(str1 +i);
			}
			else
			{
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

// int main ()
// {
// 	char *m;
// 	char *n;
	
// 	m = "manar 1337 ben salah";
// 	n = "";

// 	printf("%s", ft_strnstr(m,n,12));
// }