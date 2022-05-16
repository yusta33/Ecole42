/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusta <yusta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 06:35:24 by yusta             #+#    #+#             */
/*   Updated: 2022/02/17 06:41:31 by yusta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*adst;
	unsigned char	*asrc;

	i = 0;
	adst = (unsigned char *)dst;
	asrc = (unsigned char *)src;
	if (!adst && !asrc)
		return (0);
	while (i < n)
	{
		adst[i] = asrc[i];
		i++;
	}
	return (dst);
}
