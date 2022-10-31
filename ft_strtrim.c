/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:43:02 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/31 20:32:26 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_start(char *s, char *set)
{
	int	len;
	int	i;
	int	c;

	len = 0;
	i = 0;
	c = 0;
	while (s[len] && set[i])
	{
		i = 0;
		while (set[i] && s[len] != set[i])
			i++;
		if (s[len] == set[i])
			c++;
		len ++;
	}
	return (c);
}

static	int	ft_end(char *s, char *set)
{
	int	len;
	int	i;
	int	c;

	len = ft_strlen(s) - 1;
	i = 0;
	c = 0;
	while (len >= 0 && set[i])
	{
		i = 0;
		while (set[i] && s [len] != set[i])
			i++;
		if (s[len] == set[i])
			c++;
		len --;
	}
	return (c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*src;
	char	*str;
	int		j;
	size_t	start;
	size_t	end;
	int		len;
	char	*ptr;

	src = (char *)s1;
	str = (char *)set;
	j = 0;
	if (!s1 || !set)
		return (NULL);
	start = ft_start(src, str);
	end = ft_end(src, str);
	len = ft_strlen(src) - (start + end);
	if (len <= 0)
		return (ft_strdup(""));
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	while (start < (ft_strlen(src) - end))
	{
		ptr[j] = src [start];
		j++;
		start ++;
	}
	ptr[j] = '\0';
	return (ptr);
}

// int main ()
// {
//     char *m;
//     char *r;
//     char *n;
//     m = "123manar123";
//     r = "123";
//     n = ft_strtrim(m,r);
//     printf("%s\n", n);
// }
