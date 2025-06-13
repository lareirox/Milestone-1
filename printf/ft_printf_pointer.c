/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:13:42 by nugoncal          #+#    #+#             */
/*   Updated: 2025/05/30 12:55:21 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_pointer(void *ptr)
{
	int				a;
	unsigned long	adress;

	a = 0;
	adress = (unsigned long)ptr;
	if (!ptr)
		return (ft_putstr("(nil)"));
	a += ft_putstr("0x");
	a += ft_printf_hex_low(adress);
	return (a);
}
