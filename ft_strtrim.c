/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcano-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:08:31 by dcano-ro          #+#    #+#             */
/*   Updated: 2022/01/31 20:12:12 by dcano-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static	int	ft_strlen_int(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static	int	incharset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static	int	index_end(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen_int(s1) - 1;
	while (i > 0 && incharset(s1[i], set))
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	end;
	size_t	j;
	char	*trimmed_str;

	if (!s1 || !set)
		return (NULL);
	end = index_end(s1, set);
	i = 0;
	j = 0;
	while (s1[i] && incharset(s1[i], set))
		i++;
	if (i == ft_strlen(s1))
		return (ft_strdup(""));
	trimmed_str = malloc(end - i + 2);
	if (trimmed_str == NULL)
		return (NULL);
	while (i <= end && s1[i])
	{
		trimmed_str[j] = s1[i];
		i++;
		j++;
	}
	trimmed_str[j] = 0;
	return (trimmed_str);
}
