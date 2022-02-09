/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcano-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 12:01:48 by dcano-ro          #+#    #+#             */
/*   Updated: 2022/01/27 18:12:05 by dcano-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

static	char	*fill_new(char const *str, int start, int end)
{
	char	*new_word;
	int		size;
	int		i;

	size = end - start - 1;
	new_word = malloc(sizeof(char) * (size + 1));
	if (!new_word)
		return (NULL);
	i = 0;
	while (i < size)
	{
		new_word[i] = str[start + i + 1];
		i++;
	}
	new_word[i] = 0;
	return (new_word);
}

static	int	count_ft_split(const char *str, char c)
{
	int	i0;
	int	i1;
	int	last;

	i0 = 0;
	i1 = 0;
	last = -1;
	while (str[i0])
	{
		if (str[i0] == c)
		{
			if (i0 - last - 1)
				i1++;
			last = i0;
		}
		i0++;
	}
	if (i0 - last - 1)
		i1++;
	return (i1);
}

char	**ft_split(char const *str, char c)
{
	char	**words;
	int		i[2];
	int		last;

	if (!str)
		return (NULL);
	words = malloc(sizeof(char *) * (count_ft_split(str, c) + 1));
	if (!words)
		return (NULL);
	i[0] = -1;
	i[1] = 0;
	last = -1;
	while (str[++i[0]])
	{
		if (str[i[0]] == c)
		{
			if (i[0] - last - 1)
				words[i[1]++] = fill_new(str, last, i[0]);
			last = i[0];
		}
	}
	if (i[0] - last - 1)
		words[i[1]++] = fill_new(str, last, i[0]);
	words[i[1]] = NULL;
	return (words);
}
