/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:43:02 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/14 17:34:36 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char *ptr;
	unsigned char *str;
	unsigned char *s
	int len;
	int i;
	
	len = ft_strlen(s1);
	i = 0;
	str = (unsigned char*)s1;
	s = (unsigned char*)set;
    ptr = (char*)malloc(len*sizeof(char) + 1);
	if(!ptr)
		return(NULL);
	
}
int main ()
{
	char *m;
	char *r;
	m = "manar123";
	r = "na";
	printf("%s",ft_strtrim(m,r));
}