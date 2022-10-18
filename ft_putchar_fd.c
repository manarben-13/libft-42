/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:17:44 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/18 21:17:57 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
	write(fd,&c,1);
}

// int main ()
// {
// 	int fd1 = open("./test1", O_RDWR | O_CREAT);
// 	int fd = open("./test", O_RDWR);
// 	printf("%d\t%d\n", fd, fd1);
// 	ft_putchar_fd('z', fd);
// 	ft_putchar_fd('z', fd1);
// }