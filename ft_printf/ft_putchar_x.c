/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusta <yusta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:40:22 by yusta             #+#    #+#             */
/*   Updated: 2022/03/07 23:40:23 by yusta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count(unsigned int a)
{
	int	i;

	i = 0;
	while (a)
	{
		a = a / 16;
		i++;
	}
	return (i);
}

static void	ft_uplow(unsigned int a, int c)
{
	if (c == 'X')
		ft_putchar((a - 10) + 'A');
	else
		ft_putchar((a - 10) + 'a');
}

int	ft_putchar_x(unsigned int x, int c)
{
	int	len;

	len = ft_count(x);
	if (x == 0)
	{
		write (1, "0", 1);
		return (len + 1);
	}
	else
	{
		if (x >= 16)
		{
			ft_putchar_x((x / 16), c);
			ft_putchar_x((x % 16), c);
		}
		else
		{
			if (x <= 9)
				ft_putchar(x + '0');
			else
				ft_uplow(x, c);
		}
	}
	return (len);
}
