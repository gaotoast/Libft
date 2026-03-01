/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:52:09 by stakada           #+#    #+#             */
/*   Updated: 2024/12/17 14:21:37 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	dispatcher(int fd, char cspec, va_list ap)
{
	int	w_ret;

	w_ret = 0;
	if (cspec == '%')
		w_ret = ft_putchar(fd, '%');
	else if (cspec == 'c')
		w_ret = ft_putchar(fd, va_arg(ap, int));
	else if (cspec == 's')
		w_ret = ft_puts(fd, va_arg(ap, char *));
	else if (cspec == 'd' || cspec == 'i')
		w_ret = ft_putdec(fd, va_arg(ap, int));
	else if (cspec == 'u')
		w_ret = ft_putudec(fd, va_arg(ap, unsigned int));
	else if (cspec == 'x')
		w_ret = ft_puthex_low(fd, va_arg(ap, unsigned int));
	else if (cspec == 'X')
		w_ret = ft_puthex_up(fd, va_arg(ap, unsigned int));
	else if (cspec == 'p')
		w_ret = ft_putptr(fd, va_arg(ap, unsigned long long));
	else
		w_ret = ft_putchar(fd, cspec);
	if (w_ret < 0)
		return (-1);
	return (w_ret);
}
