/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:32:34 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/29 16:04:33 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int counter (long nbr)
{
	int count ;
	
	count = 0;
	if (nbr < 0)
	{
		count ++;
		nbr = nbr * -1;
	}
	if ( nbr == 0)
      count ++;
	while ( nbr != 0)
	{
		nbr = nbr / 10;
		count ++;
	}
	return(count);
}

char	*ft_itoa(int n)
{
    int count;
    char *ptr;
    int i;
	long	nb;

    nb = n;
	count = counter(nb);
    i = 0;
    ptr = (char *)malloc(count + 1);
    if (!ptr)
        return NULL;
    ptr[count ] = '\0';
	if (n < 0)
	{
		nb *= -1;
		i = 1;
	}
    while(count > 0)
    {
        ptr[count - 1] = (nb % 10 + 48);
        nb = nb / 10;
        count --;
    }
  	if (i == 1)
		ptr[0] = '-';
    return(ptr);
}

int main ()
{
  int m = -0;
  printf ("m = {%s}\nlen == %lu\n" , ft_itoa(m), strlen(ft_itoa(m)));
}