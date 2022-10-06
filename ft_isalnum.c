/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:56:44 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/06 21:45:05 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int arg)
{
    if (ft_isalpha(arg))
        return(1);
    else if (ft_isdigit(arg))
        return(1);
    else 
        return(0);
}
