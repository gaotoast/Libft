/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:35:50 by stakada           #+#    #+#             */
/*   Updated: 2024/12/17 14:21:44 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_vdprintf(int fd, const char *fmt, va_list ap)
{
	int	len;
	int	w_ret;
	int	i;

	len = 0;
	i = 0;
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			i++;
			w_ret = dispatcher(fd, fmt[i], ap);
			if (w_ret < 0)
				return (-1);
			len += w_ret;
		}
		else
		{
			if (ft_putchar(fd, fmt[i]) < 0)
				return (-1);
			len++;
		}
		i++;
	}
	return (len);
}
