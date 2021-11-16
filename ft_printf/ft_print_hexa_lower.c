#include"ft_printf.h"

void	ft_print_hexa_lower(int hexa)
{
    char *base="0123456789abcdef";
   
   if (hexa < 0)
   {
       hexa *= -1;
       ft_putchar('-');
   }
   
   if(hexa <= 15)
   {
       ft_putchar(base[hexa]);
   }
   
   if (hexa > 15)
   {
       ft_print_hexa_lower(hexa/16);
       ft_print_hexa_lower(hexa%16);
   }
}