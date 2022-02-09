/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcano-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:14:00 by dcano-ro          #+#    #+#             */
/*   Updated: 2022/01/27 16:58:30 by dcano-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*copys1;

	i = 0;
	while (s1[i])
		i++;
	copys1 = malloc(i + 1);
	if (copys1 == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		copys1[i] = s1[i];
		i++;
	}
	copys1[i] = 0;
	return (copys1);
}
