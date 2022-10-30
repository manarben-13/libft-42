/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:29:43 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/30 20:33:31 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)str;
	if (c == 0)
		return (ptr + ft_strlen(ptr));
	while (ptr[i])
	{
		if (ptr[i] == (unsigned char)c)
		{
			return (&ptr[i]);
		}
		i++;
	}
	return (NULL);
}

// int main ()
// {
//   printf("%s\n", ft_strchr(NULL , 'd'));
//   printf("%s\n", strchr(NULL , 'd'));
// }

// int main ()
// {
//  char *n = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
//  char m = '\0'; 
//  printf ("%s", ft_strchr(n,m));
// }