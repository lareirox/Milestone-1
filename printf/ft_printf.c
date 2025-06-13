/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:53:07 by nugoncal          #+#    #+#             */
/*   Updated: 2025/05/30 16:28:59 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	check_arg(const char *format, int *i, va_list args)
{
	int	chars_writen;

	chars_writen = 0;
	if (format[*i] == 'c')
		chars_writen += ft_putchar(va_arg(args, int));
	else if (format[*i] == 's')
		chars_writen += ft_putstr(va_arg(args, char *));
	else if (format[*i] == 'd' || format[*i] == 'i')
		chars_writen += ft_putnbr(va_arg(args, int));
	else if (format[*i] == 'u')
		chars_writen += ft_printf_unsigned(va_arg(args, unsigned int));
	else if (format[*i] == '%')
		chars_writen += ft_putchar('%');
	else if (format[*i] == 'x')
		chars_writen += ft_printf_hex_low(va_arg(args, unsigned int));
	else if (format[*i] == 'X')
		chars_writen += ft_printf_hex_up(va_arg(args, unsigned int));
	else if (format[*i] == 'p')
		chars_writen += ft_printf_pointer(va_arg(args, void *));
	(*i)++;
	return (chars_writen);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			i;
	int			chars_writen;

	va_start(args, format);
	i = 0;
	chars_writen = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			chars_writen += check_arg(format, &i, args);
		}
		else
		{
			chars_writen += write(1, &format[i], 1);
			i++;
		}
	}
	va_end(args);
	return (chars_writen);
}
