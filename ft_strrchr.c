/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:09:14 by mben-sal          #+#    #+#             */
/*   Updated: 2022/11/01 21:39:39 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;
	int		len;

	ptr = (char *)str;
	len = ft_strlen(ptr);
	if (c == '\0')
		return (ptr + ft_strlen(ptr));
	while (len >= 0)
	{
		if (ptr[len] == (unsigned char)c)
		{
			return (&ptr[len]);
		}
		len--;
	}
	return (NULL);
}

// int main ()
// {
//   printf("%s\n", ft_strrchr("manar" , 'a'));
//   printf("%s", strrchr("manar" , 'a'));
// }