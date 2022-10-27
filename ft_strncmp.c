/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:27:31 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/26 20:32:52 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first , const char *second , size_t len)
{
	unsigned char *f;
	unsigned char *s;
	size_t  i;

	f = (unsigned char*)first;
	s = (unsigned char*)second;
	i = 0;
	if (!len)
		return(0);
	while ((f[i] || s[i]) && i < len )
	{
		if(f[i] != s[i])
			return(f[i] - s[i]);
		i++;
	}
	return(0);
}

// int main ()
// {
// 	char *m;
// 	char *n;

// 	m = "abc";
// 	n = "acb";
	
// 	printf("%d", ft_strncmp(m, n, 2));
// }