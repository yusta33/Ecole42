/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusta <yusta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 22:04:45 by yusta             #+#    #+#             */
/*   Updated: 2022/02/22 01:12:07 by yusta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*my_list;

	my_list = (t_list *)malloc(sizeof(t_list));
	if (!my_list)
		return (NULL);
	my_list -> content = content;
	my_list -> next = NULL;
	return (my_list);
}
