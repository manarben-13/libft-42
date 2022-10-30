/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:51:27 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/30 19:25:56 by mben-sal         ###   ########.fr       */
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

//int main ()
//{
	// char arr[] = "geeksforgeeks";
	// char a = 'a';
	//int arr[5] = {1, 2, 3, 4, 5};
	//int a = 0;
	//memset(arr, a, 12);
	// printf("%s", arr);
	//int i = 0;
	//while (i < 5)
	//{
	// ft_memset(arr+3, a, 12);
	//	printf("%d\n", arr[i++]);
	//}
//}
