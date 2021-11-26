/*
** EPITECH PROJECT, 2021
** PRINTF_C
** File description:
** PRINTF_C
*/

#include "my_printf.h"

int my_printf(char *str, ...)
{
    int i = 0;
    va_list arg;

    va_start(arg, str);
    while (str[i]) {
        if (str[i] == '%') {
            disp_stdarg(str[i + 1], arg);
            i++;
        } else {
            my_putchar(str[i]);
        }
        i++;
    }
    va_end(arg);
    return (i);
}