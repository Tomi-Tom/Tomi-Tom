/*
** EPITECH PROJECT, 2021
** MY_H
** File description:
** all for include my libc
*/

#ifndef MY_H
#define MY_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define ATOD(x) x = x - '0'

void    my_putchar(char c);
void    my_putstr(char const *str);
void    my_puterror(char const *str);
int     my_put_nbr(int nb);

int     my_strlen(char const *str);
int     my_nbrlen(int nb);

int     my_isneg(int nb);
void    my_swap(int *a, int *b);
int     my_getnbr(char const *str);
char	*my_itoa(int nb);
void    my_sort_int_array(int *tab, int size);
int     my_compute_power_rec(int nb, int power);
int     my_compute_square_root(int nb);
int     my_is_prime(int nb);
int     my_find_prime_sup(int nb);
char    *my_strcpy(char *dest, char const *src);
char    *my_strncpy(char *dest, char const *src, int n);
char    *my_revstr(char *str);
char    *my_strstr(char *str, char const *to_find);
int     my_strcmp(char const *s1, char const *s2);
int     my_strncmp(char const *s1, char const *s2, int n);
char    *my_strupcase(char *str);
char    *my_strlowcase(char *str);
char    *my_strcapitalize(char *str);
int     my_str_isalpha(char const *str);
int     my_str_isnum(char const *str);
int     is_num(char c);
int     my_str_islower(char const *str);
int     my_str_isupper(char const *str);
int     my_str_isprintable(char const *str);
int     my_showstr(char const *str);
int     my_showmem(char const *str, int size);
char    *my_strcat(char *dest, char const *src);
char    *my_strccat(char *dest, char c);

char    *my_strncat(char *dest, char const *src, int n);
char    **my_str_to_word_array(char const *str);
int     my_putnbr_base(int nbr, char const *base);
int     my_strlen_base(char const *str);
int     count(char *str);
int     compare(char act, char bef);
char    *my_strdup(char const *src);
int     my_strlendup(char const *str);
int     my_modulo(int x, int y);
int     do_op(int nb1, int nb2, char op);


#endif
