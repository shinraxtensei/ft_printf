/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:25:18 by ahouari           #+#    #+#             */
/*   Updated: 2021/11/20 18:26:18 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static int	count_len(unsigned int n)
{
	int	len;

	len = 0;
	if (!n)
		return (1);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	ft_putnbr_u(unsigned int n)
{
	unsigned long	i;

	i = n;
	if (i < 0)
	{
		ft_putchar('-');
		i = i * -1;
	}
	if ((i >= 0) && (i <= 9))
	{
		ft_putchar((i + '0'));
	}
	if (i > 9)
	{
		ft_putnbr_u((i / 10));
		ft_putnbr_u((i % 10));
	}
	return (count_len(n));
}
