/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:26:56 by mben-sal          #+#    #+#             */
/*   Updated: 2022/11/08 18:28:07 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

// int main()
// {
// 	int m[5] = {2,300,6,7};
// 	int r[5] = {2,300,6,7};
// 	printf("%d", ft_memcmp(m,r,sizeof(int)*2));
// }

// int main ()
// {
//     char *n = "abcsd";
//     char *m = "abcs";
//     printf("%d\n" , ft_memcmp(n,m,5));

//     printf("%d\n", memcmp(n,m,5));
// }
// 00000000 00000000 00000001 00101100