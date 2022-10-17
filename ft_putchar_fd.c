/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:17:44 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/17 19:27:17 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
	write(fd,&c,1);
}

int main ()
{
	int fd = open("./txt", O_RDWR);
	int fd1 = open("./test", O_RDWR);
	printf("%d\t%d\n", fd, fd1);
	ft_putchar_fd('z', fd);
}