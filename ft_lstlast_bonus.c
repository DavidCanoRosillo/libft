/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcano-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:47:30 by dcano-ro          #+#    #+#             */
/*   Updated: 2022/02/04 19:09:10 by dcano-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*prev;

	prev = NULL;
	while (lst != NULL)
	{
		prev = lst;
		lst = lst->next;
	}
	return (prev);
}
