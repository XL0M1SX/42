#include "ft_printf.h"

static int	ft_ptr_len(unsigned long long num)
{
	int len;

	len = 0;
	if (num == 0)
		return (1);
	while (num)
	{
		num /= 16;
		len++;
	}
	return (len);
}

static void	ft_put_ptr(unsigned long long num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else
			ft_putchar(num - 10 + 'a');
	}
}

int	ft_print_ptr(unsigned long long ptr)
{
	int len;

	len = 2; // Per "0x"
	ft_putstr("0x");
	if (ptr == 0)
	{
		ft_putchar('0');
		return (len + 1);
	}
	len += ft_ptr_len(ptr);
	ft_put_ptr(ptr);
	return (len);
}