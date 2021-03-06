/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcano-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:55:08 by dcano-ro          #+#    #+#             */
/*   Updated: 2022/01/24 16:56:21 by dcano-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, int len)
{
	char	*str;
	int		i;

	i = 0;
	str = b;
	while (len - i > 0)
	{
		str[i] = c;
		i++;
	}
	return (b);
}
