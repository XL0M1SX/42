#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

/* typedef struct s_flags
{
    int minus;     // Flag '-' per allineare a sinistra
    int zero;      // Flag '0' per il padding con zero
    int hash;      // Flag '#' per prefisso 0x/0X
    int space;     // Flag ' ' per spazio prima dei numeri positivi
    int plus;      // Flag '+' per forzare il segno
    int width;     // Larghezza minima del campo
    int precision; // Precisione dopo il punto
    int dot;       // Flag per indicare se c'è un punto
} t_flags;
 */

int ft_printf(const char *format, ...);
int ft_putchar(char c);
int ft_putstr(char *s);
int ft_putnbr(int n);
int ft_print_unsigned(unsigned int n);
int ft_print_hex(unsigned int num, int uppercase);
int ft_print_ptr(unsigned long long ptr);

#endif