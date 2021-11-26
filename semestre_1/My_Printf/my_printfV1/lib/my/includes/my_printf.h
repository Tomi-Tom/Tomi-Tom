/*
** EPITECH PROJECT, 2021
** BS_PRINTF_H
** File description:
** .h for the bootstrap of printf
*/

#ifndef MY_PRINTF_H
    #define MY_PRINTF_H

    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <stdarg.h>

void disp_stdarg(char c, va_list arg);
int my_printf(char *str, ...);

void my_putchar(char c);
void my_putstr(char const *str);
int my_strlen(char const *str);
void my_put_nbr(int nb);
void my_put_nbr_u(unsigned int nb);
void my_put_nbr_ll(long long int nb);
void my_put_nbr_base(int nb, char *base);
void my_put_ptr(void *ptr);

#endif /* !MY_PRINTF_H */
