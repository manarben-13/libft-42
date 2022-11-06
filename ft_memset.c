/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:51:27 by mben-sal          #+#    #+#             */
/*   Updated: 2022/11/06 17:50:43 by mben-sal         ###   ########.fr       */
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
//   int arr[5] ={1,2,3,4,5};
//   int a;
//   int i;
//   a = 2;
//   i = 0;
//   while (i<5)
//   {
//     ft_memset(arr, a, 16);
//     printf("%d",arr[i++]);
//   }
// }
// int main()
// {
//     int *i;
//     ft_memset(i, 57, 1);
//     ft_memset((unsigned char *)i +1, 5, 1);
//     printf("%d",*i);
//     return(0);
// }