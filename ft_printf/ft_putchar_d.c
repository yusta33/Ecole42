/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusta <yusta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:39:45 by yusta             #+#    #+#             */
/*   Updated: 2022/03/07 23:39:46 by yusta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count(long a)
{
	int	i;

	i = 0;
	if (a == 0)
		return (1);
	if (a < 0)
		a = -a;
	while (a)
	{
		a = a / 10;
		i++;
	}
	return (i);
}

int	ft_putchar_d(int n)
{
	int	len;

	len = ft_count(n);
	if (n == -2147483648)
	{
		len += ft_putchar('-');
		ft_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		n = n * -1;
		len += ft_putchar('-');
	}
	if (n < 10)
	{
		ft_putchar(n + '0');
		return (len);
	}
	else
	{
		ft_putchar_d(n / 10);
	}
	ft_putchar_d(n % 10);
	return (len);
}
