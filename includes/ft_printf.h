/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 00:14:43 by stakada           #+#    #+#             */
/*   Updated: 2024/12/17 14:26:33 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define BASE_10 "0123456789"
# define BASE_16_LOW "0123456789abcdef"
# define BASE_16_UP "0123456789ABCDEF"

int	ft_printf(const char *fmt, ...);
int	ft_vprintf(const char *fmt, va_list ap);
int	ft_vdprintf(int fd, const char *fmt, va_list ap);
int	dispatcher(int fd, char cspec, va_list ap);
int	ft_putchar(int fd, int c);
int	ft_puts(int fd, char *s);
int	ft_putdec(int fd, int num);
int	ft_putudec(int fd, unsigned int num);
int	ft_puthex_low(int fd, unsigned int num);
int	ft_puthex_up(int fd, unsigned int num);
int	ft_putptr(int fd, unsigned long long ptr);
int	ft_putnbr_base(int fd, unsigned long long num, char *base);

#endif