/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcano-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:00:24 by dcano-ro          #+#    #+#             */
/*   Updated: 2022/01/27 13:57:20 by dcano-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "libft.h"

static long	reverse(long num)
{
	long	rev_num;

	rev_num = 0;
	while (num > 0)
	{
		rev_num = rev_num * 10 + num % 10;
		num = num / 10;
	}
	return (rev_num);
}

static	int	digits_n(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	ascii;
	long	copy;
	int		i;

	if (n == 0)
		write(fd, "0", 1);
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	copy = reverse (n);
	i = digits_n(n);
	while (copy != 0)
	{
		ascii = copy % 10 + 48;
		ft_putchar_fd(ascii, fd);
		copy = copy / 10;
		i--;
	}
	while (i-- > 0)
		ft_putchar_fd('0', fd);
}
