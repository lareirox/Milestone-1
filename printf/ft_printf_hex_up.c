/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex_up.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:45:59 by nugoncal          #+#    #+#             */
/*   Updated: 2025/05/30 15:28:19 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hex_up(unsigned long n)
{
	int		j;
	char	*base_hex_up;

	base_hex_up = "0123456789ABCDEF";
	j = 0;
	if (n >= 16)
	{
		j += ft_printf_hex_up(n / 16);
	}
	j += ft_putchar(base_hex_up[n % 16]);
	return (j);
}
