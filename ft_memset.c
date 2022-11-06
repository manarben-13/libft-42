/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:51:27 by mben-sal          #+#    #+#             */
/*   Updated: 2022/11/06 21:35:01 by mben-sal         ###   ########.fr       */
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
// 	ft_memset(arr + 3, 1, 1);
// 	ft_memset(arr + 4, 2, 1);
// 	ft_memset(arr + 5, 3, 1);
// 	while (i < 6)
// 	{
// 		printf("%d | ",arr[i++]);
// 	}
// }
