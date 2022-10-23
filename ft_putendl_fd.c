/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 20:40:27 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/23 13:26:49 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_putendl_fd(char *s, int fd)
{
	int i;
	i = 0;
	
	if (!s)
		return ;

	while (s[i])
	{
		ft_putchar_fd(s[i],fd);
		i++;
	}
	ft_putchar_fd('\n',fd);
}

// int main()
// {
// 	int fd = open("./txt", O_RDWR | O_CREAT);
// 	char n[] = "manar";
// 	ft_putendl_fd(n,fd);
// }