/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:49:27 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/18 22:54:08 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void *ft_calloc(size_t count, size_t size)
{
  unsigned char *ptr;
  size_t i;
  
  i = 0;
  ptr = (unsigned char*)malloc(size * count);
  if (!ptr)
    return (NULL); 
  while (i < count)
  {
    ptr[i] = 0;
    i++;
  }
  return (ptr);
}
// int main ()
// {
//     char *s = calloc (65,5);
//     printf("%p\t%zu\n", s, strlen(s));
//     printf("%p\t %zu\n", ft_calloc (6,5), strlen(ft_calloc (2,4)));
// } 