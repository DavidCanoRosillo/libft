/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcano-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:51:30 by dcano-ro          #+#    #+#             */
/*   Updated: 2022/02/04 18:57:29 by dcano-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*prev;
	t_list	*node;

	node = *lst;
	while (node != NULL)
	{
		prev = node;
		node = node->next;
		ft_lstdelone(prev, del);
	}
	*lst = NULL;
}
