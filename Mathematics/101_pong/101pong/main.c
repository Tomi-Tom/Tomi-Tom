/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** 101 pong main
*/

#include "101pong.h"

int check_arg_err(char *str)
{
    int i = 0;

    while (str[i]) {
        if (!((str[i] >= '0' && str[i] <= '9') ||
            str[i] == '.' || str[i] == '-'))
            return 1;
        i++;
    }
    return 0;
}

int check_err(int ac, char **av)
{
    int i = 1;
    int res = 0;

    while (i < ac) {
        if (check_arg_err(av[i]))
            res = 1;
        i++;
    }
    if (res)
        return 1;
    return 0;
}

int main(int ac, char **av)
{
    if (!(ac == 8 || ac == 2))
        return 84;
    if (check_err(ac, av) && ac == 8)
        return 84;
    if (ac >= 2) {
        if (flags(av[1]))
            return 0;
        if (ac == 8)
            pong(av);
    }
    return 0;
}