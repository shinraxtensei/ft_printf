#include"libft.h"
#include"ft_printf.h"

void    ft_write(char format, const void *arg)
{
    if (format == 'c')
        ft_putchar((char)arg);
    else if (format == 's')
        ft_putstr((char *)arg);
    else if (format == 'd' || format == 'i')
        ft_putnbr((int)arg);
    else if (format == 'u')
        ft_putnbr_u((unsigned int)arg);
}

int ft_printf(const char *str, ...)
{
    va_list ap;
    int i;
    i = 0;
    void *next;
    va_start(ap,str);
    while (str[i])
    {
        if(str[i] == '%')
        {
            next = va_arg(ap,void *);
            i++;
            ft_write(str[i],next);
        }
        else
            ft_putchar(str[i]);
        i++;
    }
    va_end(ap);
    return(0);
}