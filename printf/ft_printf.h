/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 17:01:26 by nugoncal          #+#    #+#             */
/*   Updated: 2025/05/13 17:05:04 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_printf_unsigned(unsigned int n);
int	ft_printf_pointer(void *ptr);
int	ft_printf_hex_up(unsigned long n);
int	ft_printf_hex_low(unsigned long n);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);

#endif
