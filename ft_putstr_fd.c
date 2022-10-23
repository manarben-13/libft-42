/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:22:36 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/23 13:17:10 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
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
}

// int main()
// {
// 	int fd = open("./txt", O_RDWR | O_CREAT);
// 	char n[] = "mohamed";
// 	ft_putstr_fd(n,fd);
// }