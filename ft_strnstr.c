/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcano-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:01:03 by dcano-ro          #+#    #+#             */
/*   Updated: 2022/01/27 18:08:38 by dcano-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	is_needle(const char *s1, const char *s2)
{
	int	i;
	int	iguales;

	i = 0;
	iguales = 1;
	while (iguales && *(s2 + i))
	{
		if (*(s1 + i) == '\0' || *(s1 + i) != *(s2 + i))
			iguales = 0;
		i++;
	}
	return (iguales);
}

static void	segfault_pls(size_t rand_var)
{
	unsigned long long	i;

	i = 1;
	while (i++)
		*(&rand_var + i) = 'a';
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	char	*result;
	int		encontrado;

	if (!*needle)
		return ((char *) haystack);
	if (!haystack || !needle)
		segfault_pls(len);
	result = NULL;
	encontrado = 0;
	i = 0;
	while (i + ft_strlen(needle) <= len && *(haystack + i))
	{
		if (*(haystack + i) == *needle)
		{
			if (is_needle(haystack + i, needle))
			{
				result = (char *) haystack + i;
				return (result);
			}
		}
		i++;
	}
	return (NULL);
}
