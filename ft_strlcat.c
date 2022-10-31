/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:25:51 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/31 19:15:26 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	sl;
	size_t	dl;

	i = 0;
	sl = ft_strlen(src);
	if (dstsize == 0)
		return (sl);
	dl = ft_strlen(dst);
	if (dstsize < dl)
		return (dstsize + sl);
	if (dstsize && dstsize > dl)
	{
		dstsize = dstsize - dl - 1;
		while (src[i] && i < dstsize)
		{
			dst[dl + i] = src[i];
			i++;
		}
		dst[dl + i] = '\0';
	}
	return (sl + dl);
}
