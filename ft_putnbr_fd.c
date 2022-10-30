/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:50:41 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/30 20:23:51 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = nbr * -1;
	}
	if (nbr <= 9)
	{
		ft_putchar_fd(nbr + 48, fd);
	}
	else
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
}

// int main ()
// {
// 	// int fd = open("./txt", O_RDWR | O_CREAT);
// 	int i = -2147483647 -1;
//   // printf("%d\n", 2);
// 	// ft_putchar_fd('z', 2);
// 	ft_putnbr_fd( i , 2);
// 	// putnbr_fd(i  , 2);
// }

// 0 ==> std input stdin
// 1 ==> std output stdout
// 2 ==> std error stderr