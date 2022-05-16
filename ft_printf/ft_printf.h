/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusta <yusta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:39:38 by yusta             #+#    #+#             */
/*   Updated: 2022/03/07 23:39:39 by yusta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>

char		*ft_uitoa(unsigned int a);

int			ft_printf(const char *str, ...);
int			ft_putchar(int c);
int			ft_putchar_s(char *c);
int			ft_putchar_u(unsigned int a);
int			ft_putchar_d(int a);
int			ft_putchar_p(unsigned long long a);
void		ft_puthex(unsigned long long a);
int			ft_putchar_x(unsigned int x, int c);

#endif
