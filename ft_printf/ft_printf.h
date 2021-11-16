#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include<stdarg.h>
#include<unistd.h>
#include<stdlib.h>




int     ft_printf(const char *, ...);
void    ft_write(char format, const void *);
void    ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putnbr_u(unsigned int n);
void	ft_putstr(char *s);
void	ft_print_hexa_lower(int hexa);
void	ft_print_hexa_upper(int hexa);




#endif