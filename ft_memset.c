/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:51:27 by mben-sal          #+#    #+#             */
/*   Updated: 2022/11/08 18:28:17 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *arr, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)arr;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (arr);
}

// #include "stdio.h"

// int main ()
// {
// 	int arr[6] ={1, 2, 3, 4, 5, 6};
// 	int i;
// 	i = 0;
// 	ft_memset(arr + 3, 215, 1);
// 	ft_memset(arr + 4, 250, 1);
// 	ft_memset(arr + 5, 256, 1);
// 	while (i < 6)
// 	{
// 		printf("%d | ",arr[i++]);
// 	}
// }

// int main ()
// {
// int r[] = {2023,3,3,7};

// 	ft_memset(r, 6, 8);
// 	printf("%d\n",r[0]);
// 	printf("%d\n",r[1]);
// 	printf("%d\n", r[2]);
// 	printf("%d\n", r[3]);
// }
//00000000 00000000 00000111 11100111
//00000110 00000110 00000110 00000110