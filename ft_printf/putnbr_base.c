/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:22:34 by stakada           #+#    #+#             */
/*   Updated: 2024/12/17 14:22:01 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(int fd, unsigned long long num, char *base)
{
	int					len;
	int					w_ret;
	int					base_len;
	unsigned long long	e;

	len = 0;
	base_len = ft_strlen(base);
	e = 1;
	while (e <= num / base_len)
		e *= base_len;
	while (e > 0)
	{
		w_ret = ft_putchar(fd, base[(num / e) % base_len]);
		if (w_ret < 0)
			return (-1);
		len += w_ret;
		e /= base_len;
	}
	return (len);
}
