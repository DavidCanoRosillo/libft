/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcano-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:57:25 by dcano-ro          #+#    #+#             */
/*   Updated: 2022/01/27 12:32:53 by dcano-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static	int	digits(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static	char	*lineskkkkk(int n, int i, int digitsn)
{
	char	*result;

	if (n < 0)
	{
		n = -n;
		digitsn = digits(n) + 1;
		result = ft_calloc(digitsn + 1, 1);
		if (result == NULL)
			return (NULL);
		result[0] = '-';
	}
	else
	{
		digitsn = digits(n);
		result = ft_calloc(digitsn + 1, 1);
		if (result == NULL)
			return (NULL);
	}
	result[digitsn] = 0;
	while (n != 0)
	{
		result[digitsn - 1 - i++] = n % 10 + 48;
		n = n / 10;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	return (lineskkkkk(n, 0, 0));
}
