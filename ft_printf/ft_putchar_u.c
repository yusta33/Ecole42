/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusta <yusta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:40:15 by yusta             #+#    #+#             */
/*   Updated: 2022/03/07 23:40:16 by yusta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_u(unsigned int a)
{
	int		len;
	char	*num;

	len = 0;
	if (a == 0)
	{
		len += ft_putchar('0');
		return (len);
	}
	if (a < 0)
	{
		if ((int)a == -1)
			a = 4294967295;
		else
			a = 4294967295 + a;
	}	
	num = ft_uitoa(a);
	len += ft_putchar_s(num);
	free(num);
	return (len);
}
