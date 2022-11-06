/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 12:40:40 by mben-sal          #+#    #+#             */
/*   Updated: 2022/11/06 12:53:34 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (0);
	head->content = content;
	head->next = NULL;
	return (head);
}

// int main()
// {
// 	int x = 27;
// 	t_list *manar = ft_lstnew(&x);
// 	printf("%d",*(int*)(manar->content));
// }