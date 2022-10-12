/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:49:27 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/12 17:33:06 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void *ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			i; 

	i = 0;
	ptr = (unsigned char*)malloc(count*size);
	if(!ptr)
		return(NULL);
	while(ptr[i])
	{
		ptr[i] = 0;
	}
	return(ptr);
}

int main ()
{
	char *s = calloc (2,4);
	printf("%s\n", s);
	//printf("%d\n", ft_calloc (2,4));
}