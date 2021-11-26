/*
** EPITECH PROJECT, 2021
** MY_PUTSTR_C
** File description:
** do a putstr
*/

#include "unistd.h"

void my_putchar(char c);

void my_putstr(char *str)
{
	int i = 0;

	while (str[i]) {
		my_putchar(str[i]);
		i++;
	}
}
