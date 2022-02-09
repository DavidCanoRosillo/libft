/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcano-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:09:25 by dcano-ro          #+#    #+#             */
/*   Updated: 2022/01/27 11:07:10 by dcano-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	int		bytesize;
	void	*result;
	char	*str;
	int		i;

	bytesize = count * size;
	i = 0;
	result = malloc(bytesize);
	if (result == NULL)
		return (NULL);
	str = result;
	while (i < bytesize)
	{
		str[i] = 0;
		i++;
	}
	return (result);
}
