/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 12:41:48 by mben-sal          #+#    #+#             */
/*   Updated: 2022/11/06 18:41:22 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main()
// {
//     //Creating the list
//     int x = 1, y =2, z = 3, a = 4;
//     t_list *head = malloc(sizeof(t_list));
//     head->content = &x;
//     head->next = NULL;

//     t_list *mery = malloc(sizeof(t_list));

//     mery->content = &y;
//     mery->next = NULL;

//     head->next = mery;

//     mery = malloc(sizeof(t_list));
//     mery->content = &z;
//     mery->next= NULL;

//     head->next->next = mery;

//     //Creating the node that you will put at the beginning of the list

//     t_list *new = malloc(sizeof(t_list));
//     new->content = &a;
//     new->next = NULL;

//     printf("%d\n", *((int *)head->content));
//     ft_lstadd_front(&head, new);
//     printf("%d\n", *((int *)head->content));
// }