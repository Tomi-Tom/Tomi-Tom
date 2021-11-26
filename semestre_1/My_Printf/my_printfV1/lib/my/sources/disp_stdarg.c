/*
** EPITECH PROJECT, 2021
** DISP_STDARG_C
** File description:
** DISP_STRARG_C
*/

#include "my_printf.h"

void disp_stdarg(char c, va_list arg)
{
    if (c == 'c')
        my_putchar(va_arg(arg, int));
    if (c == 's')
        my_putstr(va_arg(arg, char *));
    if (c == 'd' || c == 'i') 
        my_put_nbr(va_arg(arg, int));
    if (c == 'u') 
        my_put_nbr_u(va_arg(arg, unsigned int));
    if (c == 'l')
        my_put_nbr_ll(va_arg(arg, long long int));
    if (c == '%') 
        my_putchar('%');
    if (c == 'x')
        my_put_nbr_base(va_arg(arg, int), "0123456789abcdef");
    if (c == 'X')
        my_put_nbr_base(va_arg(arg, int), "0123456789ABCDEF");
    if (c == 'b')
        my_put_nbr_base(va_arg(arg, int), "01");
    if (c == 'p')
        my_put_ptr(va_arg(arg, void *));
}
