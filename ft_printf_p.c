/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 08:18:51 by ahouari           #+#    #+#             */
/*   Updated: 2021/11/30 11:40:22 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_print_p(unsigned long arg, int *len)
{
	ft_putstr("0x");
	ft_print_hexa_lower(arg, len);
	(*len) += 2;
}
