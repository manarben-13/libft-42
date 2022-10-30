/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:25:51 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/30 16:17:40 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize)
 {
    size_t    i;
    size_t    sl;
    size_t    dl;

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

// int main() 
// {
// 	char dest[15];
// 	memset(dest, 'r', 15);
//     // ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
// 	// size_t i = ft_strlcat(d, s, 10);
// 	printf("%zu\t%s\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 5), dest);
// 	// d = "hello world";
// 	// s = "manar";
// 	// i = strlcat(d, s, 10);
// 	// printf("%s\n", d);
// }