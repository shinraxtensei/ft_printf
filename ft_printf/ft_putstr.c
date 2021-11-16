#include"ft_printf.h"

void	ft_putstr(char *s)
{
	if (s != 0)
	{
		while (*s)
		{
			write(1, s, 1);
			s++;
		}
	}
}