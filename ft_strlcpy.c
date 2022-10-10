/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:51:16 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/10 16:19:42 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int len = 0;
	size_t i = 0;
	char *s = (char*)src;

	len = ft_strlen(src);
	if (dstsize < 1)
		return(len);
	while (i < dstsize - 1)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return(len);
}

int main ()
{
	char m[] = "quizquizgoal";
	char n[] = "geeksforgeeks";
	size_t	i;
	i = ft_strlcpy(m, n, 0);
	printf("ft_strlcpy = %zu\t%s\n", i, m);
	char a[] = "quizquizgoal";
	char b[] = "geeksforgeeks";
	printf("strlcpy = %zu\t%s\n", strlcpy(a, b, 0), a);
}
