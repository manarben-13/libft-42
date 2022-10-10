/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:51:16 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/10 12:06:45 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	char	dst[] = "Yello";
	char	src[] = "Hello w";
	size_t n = strlcpy(dst, src, 6);
	printf("%zu\t%s", n, dst);
}
