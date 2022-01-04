/*
** EPITECH PROJECT, 2021
** MY_PUTSTR_C
** File description:
** do a putstr
*/

#include <unistd.h>

int my_strlen(const char *str)
{
    int i = 0;

    while (str[i])
        i++;
    return i;
}

void my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}
