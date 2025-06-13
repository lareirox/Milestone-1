/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex_low.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:45:50 by nugoncal          #+#    #+#             */
/*   Updated: 2025/05/30 15:23:04 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hex_low(unsigned long n)
{
	int		j;
	char	*base_hex_low;

	base_hex_low = "0123456789abcdef";
	j = 0;
	if (n >= 16)
	{
		j += ft_printf_hex_low(n / 16);
	}
	j += ft_putchar(base_hex_low[n % 16]);
	return (j);
}
