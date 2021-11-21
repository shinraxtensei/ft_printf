/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 08:17:40 by ahouari           #+#    #+#             */
/*   Updated: 2021/11/21 08:18:32 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include<unistd.h>
# include<stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putnbr_u(unsigned int n);
int		ft_putstr(char *s);
void	ft_print_hexa_lower(unsigned long hexa, int *len);
void	ft_print_hexa_upper(unsigned long hexa, int *len);
void	ft_print_p(unsigned long arg, int *len);
size_t	ft_strlen(const char *str);

#endif
