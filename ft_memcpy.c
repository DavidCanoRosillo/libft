/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcano-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:53:03 by dcano-ro          #+#    #+#             */
/*   Updated: 2022/01/27 18:03:24 by dcano-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*to;
	char	*from;

	if (dst == NULL && src == NULL)
		return (dst);
	i = 0;
	to = dst;
	from = (char *) src;
	while (n - i > 0)
	{
		to[i] = from[i];
		i++;
	}
	return (dst);
}
