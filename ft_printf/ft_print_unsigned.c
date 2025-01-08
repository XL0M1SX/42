#include "ft_printf.h"

static int	ft_unsigned_len(unsigned int n)
{
	int len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	ft_print_unsigned(unsigned int n)
{
	int len;

	len = ft_unsigned_len(n);
	if (n >= 10)
		ft_print_unsigned(n / 10);
	ft_putchar(n % 10 + '0');
	return (len);
}