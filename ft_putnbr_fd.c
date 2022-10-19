/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:50:41 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/18 22:54:42 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    write(fd,&c,1);
}

void ft_putnbr_fd(int n, int fd)
{
  long int nbr;
  nbr = n;
  if(nbr < 0)
  {
    ft_putchar_fd('-',fd);
    nbr = nbr * -1;
   
  }
  else if ( nbr > 9)
  {
    ft_putnbr_fd(nbr / 10 , fd);
    ft_putchar_fd( nbr % 10 + 48 , fd);
  }
  else
  {
    ft_putchar_fd( nbr + 48 , fd);
  }
}

// int main ()
// {
// 	int fd = open("./txt", O_RDWR | O_CREAT);
// 	printf("%d\n", fd);
// 	ft_putchar_fd('z', fd);
// 	ft_putnbr_fd( 45, fd );
// }

// 0 ==> std input stdin
// 1 ==> std output stdout
// 2 ==> std error stderr