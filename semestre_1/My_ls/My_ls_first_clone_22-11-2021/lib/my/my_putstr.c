/*
** EPITECH PROJECT, 2021
** MY_PUTSTR
** File description:
** Task02
*/

#include <unistd.h>

int my_strlen_putstr(char const *str)
{
    int i = 0;

    while (str[i]) {
        i++;
    }
    return i;
}

int my_putstr(char const *str)
{
    write(1, str, my_strlen_putstr(str));
    return (0);
}
