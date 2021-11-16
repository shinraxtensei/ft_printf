#include"ft_printf.h"

void	ft_putnbr(int n)
{
	long int	i;

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
		ft_putnbr((i / 10));
		ft_putnbr((i % 10));
	}
}