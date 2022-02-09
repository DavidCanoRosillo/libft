/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcano-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:05:00 by dcano-ro          #+#    #+#             */
/*   Updated: 2022/01/27 17:25:13 by dcano-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	lens;
	unsigned int	i;

	if (!s)
		return (NULL);
	lens = ft_strlen(s);
	i = 0;
	result = malloc(lens + 1);
	if (result == NULL)
		return (NULL);
	while (i < lens)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = 0;
	return (result);
}
