/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putdec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:04:18 by stakada           #+#    #+#             */
/*   Updated: 2024/12/17 14:24:10 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdec(int fd, int num)
{
	long long	ll;
	int			len;
	int			w_ret;

	ll = num;
	len = 0;
	if (num < 0)
	{
		ll = -ll;
		w_ret = ft_putchar(fd, '-');
		if (w_ret < 0)
			return (-1);
		len += w_ret;
	}
	w_ret = ft_putnbr_base(fd, (unsigned long long)ll, BASE_10);
	if (w_ret < 0)
		return (-1);
	len += w_ret;
	return (len);
}

int	ft_putudec(int fd, unsigned int num)
{
	int	len;
	int	w_ret;

	len = 0;
	w_ret = ft_putnbr_base(fd, (unsigned long long)num, BASE_10);
	if (w_ret < 0)
		return (-1);
	len += w_ret;
	return (len);
}
