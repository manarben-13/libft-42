/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:29:43 by mben-sal          #+#    #+#             */
/*   Updated: 2022/11/02 19:12:04 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	return (ft_memchr(str, c, strlen(str)+1));
}

// int main ()
// {
//   printf("%s\n", ft_strchr("teste", 1024));
//   printf("%s\n", strchr("teste", 1024));
// }

// int main ()
// {
//  char *n = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
//  char m = '\0'; 
//  printf ("%s", ft_strchr(n,m));
// }