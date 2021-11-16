#include"ft_printf.h"

void	ft_putnbr_u(unsigned int n)
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
}