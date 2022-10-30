/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:32:53 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/30 20:42:48 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	len;
	char	*ptr;
	char	*str;

	i = 0;
	str = (char *)s1;
	len = ft_strlen(str);
	ptr = (char *)malloc(sizeof(char) *(len + 1));
	if (!ptr)
		return (NULL);
	while (i < len)
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// int main ()
// {
//   char *s;
//   s = "this is a normal test";
//   char *s1 = ft_strdup(s);
//   char *s2 = strdup(s);
//   printf ("%s\n%lu\n", s1, sizeof(s1));
//   printf ("%s\n%lu\n", s2, sizeof(s2));
// }