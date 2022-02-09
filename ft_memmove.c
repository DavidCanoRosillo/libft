/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcano-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:57:36 by dcano-ro          #+#    #+#             */
/*   Updated: 2022/01/25 14:19:14 by dcano-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t					i;
	const unsigned char		*from;
	unsigned char			*to;

	from = src;
	to = dst;
	i = 0;
	if (dst > src)
	{
		while (i < len)
		{
			to[len - i - 1] = from[len - i - 1];
			i++;
		}
		return (dst);
	}
	return (ft_memcpy(dst, src, len));
}
