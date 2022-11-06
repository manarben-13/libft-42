/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:38:43 by mben-sal          #+#    #+#             */
/*   Updated: 2022/11/06 21:38:35 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (dest < src)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		while (n--)
		d[n] = s[n];
	}
	return (d);
}

// int main ()
// {
//     char n [] = "1337 is a school";
//     char *s;
//     s = ft_memmove(n , n +3, 3);
//     printf("%s\n", s );
// 	s = memmove(n , n + 3 , 3);
//     printf("%s", s );
// }