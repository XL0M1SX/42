#include "ft_printf.h"

static int	ft_hex_len(unsigned int num)
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

int	ft_print_hex(unsigned int num, int uppercase)
{
	int     len;
	char    *base;

	len = ft_hex_len(num);
	/* base = uppercase ? "0123456789ABCDEF" : "0123456789abcdef"; */
    if (uppercase) {
    base = "0123456789ABCDEF";
    } else {
    base = "0123456789abcdef";
    }
	if (num >= 16)
		ft_print_hex(num / 16, uppercase);
	ft_putchar(base[num % 16]);
	return (len);
}