/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcano-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:51:59 by dcano-ro          #+#    #+#             */
/*   Updated: 2022/01/25 14:20:43 by dcano-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	needle;
	const char		*str;
	size_t			i;

	i = 0;
	str = s;
	needle = c;
	while (i < n)
	{
		if ((unsigned char) str[i] == needle)
			return ((void *) str + i);
		i++;
	}
	return (NULL);
}
