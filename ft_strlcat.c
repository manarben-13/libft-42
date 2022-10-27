/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:25:51 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/26 21:11:59 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
 {
    size_t    i;
    size_t    sl;
    size_t    dl;

    i = 0;
    sl = ft_strlen(src);
    if (dstsize == 0)
        return (sl);
    dl = strlen(dst);
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

// int main() 
// {
// 	char *d = "hello world";
// 	char *s = "manar";
// 	size_t i = ft_strlcat(d, s, 10);
// 	printf("%zu\n", i);
// 	d = "hello world";
// 	s = "manar";
// 	i = strlcat(d, s, 10);
// 	printf("%s\n", d);
// }