/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 00:30:30 by stakada           #+#    #+#             */
/*   Updated: 2024/12/17 14:21:42 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
	int		len;
	va_list	ap;

	va_start(ap, fmt);
	len = ft_vdprintf(STDOUT_FILENO, fmt, ap);
	va_end(ap);
	return (len);
}
