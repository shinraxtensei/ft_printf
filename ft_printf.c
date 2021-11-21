/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:29:19 by ahouari           #+#    #+#             */
/*   Updated: 2021/11/21 08:30:04 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static void	ft_write_value(char format, const void *arg, int *len )
{
	if (format == 'c')
		*len += ft_putchar((char)arg);
	else if (format == 's')
		*len += ft_putstr((char *)arg);
	else if (format == 'i')
		*len += ft_putnbr((int)arg);
	else if (format == 'd')
		*len += ft_putnbr((long)arg);
	else if (format == 'u')
		*len += ft_putnbr_u((unsigned int)arg);
	else if (format == 'x')
		ft_print_hexa_lower((unsigned int)arg, len);
	else if (format == 'X')
		ft_print_hexa_upper((unsigned int)arg, len);
	else if (format == 'p')
		ft_print_p((unsigned long)arg, len);
	else if (format == '%')
		*len += ft_putchar('%');
}

int	ft_printf(const char *str, ...)
{
	int		len;
	int		i;
	va_list	lst;
	void	*next;

	i = 0;
	len = 0;
	va_start(lst, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] != '%')
				next = va_arg(lst, void *);
			ft_write_value(str[i], next, &len);
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(lst);
	return (len);
}
