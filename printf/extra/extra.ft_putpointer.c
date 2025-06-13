/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:13:42 by nugoncal          #+#    #+#             */
/*   Updated: 2025/05/30 15:46:23 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(void *ptr)
{
	int				a;
	unsigned long	adress;	

	a = 0;
	adress = (unsigned long)ptr;// fast casting para poder tratar o valor ptr como unsigned long (normalamente 64bit)
	if (!ptr)
		return (ft_putstr("nil"));// For NULL pointers: Prints "nil" (3 characters). Returns the number of characters printed by ft_putstr("nil") (3).
	a += ft_putstr("0x");// printa 0x e retorna o valor de 2,
	a += ft_printf_hex_low(adress);// retorna o numero de caracteres impressos
	return (a);//printf retorna o valor dos caracteres impresos (printf-like functions, which return the total characters printed.)
}
