/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcano-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:56:35 by dcano-ro          #+#    #+#             */
/*   Updated: 2022/01/24 16:57:09 by dcano-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*str;

	i = 0;
	str = s;
	while (n - i > 0)
	{
		str[i] = 0;
		i++;
	}
}
