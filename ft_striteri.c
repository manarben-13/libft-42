/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:22:22 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/22 11:24:23 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
    int    i;

    i = 0;
    if (!s || !f)
        return;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
    return;
}
// int ft_edit(unsigned int i ,char c)
// {
    
//    c += i;
//     return(c);
// }
// int main ()
// {
// 	char m[]= "manar";
// 	ft_striteri(m,ft_edit);
// 	printf("%s",m);
// }