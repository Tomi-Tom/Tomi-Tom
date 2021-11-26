/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** 101 pong main
*/

#include "101pong.h"

int main(int ac, char **av)
{
    if (ac >= 2) {
        if (flags(av[1]))
            return 0;
        if (ac == 8)
            pong(av);
    }
    return 0;
}