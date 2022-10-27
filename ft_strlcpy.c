/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:51:16 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/26 20:59:20 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int len ;
	size_t i ;
	char *s = (char*)src;

	len = (int)ft_strlen(src);
	i = 0;
	if ( dstsize )
	{
		while ( src[i] && i < dstsize - 1)
		{
			dst[i] = s[i];
			i++;
		}
		dst[i] = '\0';
	}
	return(len);
}

// int main ()
// {
// 	char m[] = "quizquizgoal";
// 	char n[] = "geeksforgeeks";
// 	size_t	i;
// 	i = ft_strlcpy(m, n, 0);
// 	printf("ft_strlcpy = %zu\t%s\n", i, m);
// 	char a[] = "quizquizgoal";
// 	char b[] = "geeksforgeeks";
// 	printf("strlcpy = %zu\t%s\n", strlcpy(a, b, 0), a);
// }