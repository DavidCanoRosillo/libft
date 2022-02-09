/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcano-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:52:16 by dcano-ro          #+#    #+#             */
/*   Updated: 2022/01/25 14:21:48 by dcano-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last_c;

	i = 0;
	last_c = NULL;
	while (s[i])
	{
		if (s[i] == (char) c)
			last_c = (char *) s + i;
		i++;
	}
	if (s[i] == (char) c)
		return ((char *) s + i);
	return (last_c);
}
