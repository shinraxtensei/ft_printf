/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:27:17 by ahouari           #+#    #+#             */
/*   Updated: 2021/11/21 08:29:29 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_print_hexa_upper(unsigned long hexa, int *len)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (hexa <= 15)
	{
		ft_putchar(base[hexa]);
		(*len)++;
	}
	if (hexa > 15)
	{
		ft_print_hexa_upper(hexa / 16, len);
		ft_print_hexa_upper(hexa % 16, len);
	}	
}
