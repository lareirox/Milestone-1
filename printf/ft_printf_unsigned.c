/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 16:57:32 by nugoncal          #+#    #+#             */
/*   Updated: 2025/06/13 15:58:55 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_unsigned(unsigned int n)
{
	int		j;
	long	i;

	j = 0;
	i = n;
	if (i >= 10)
		j += ft_printf_unsigned(i / 10);
	j += ft_putchar((n % 10) + '0');
	return (j);
}
