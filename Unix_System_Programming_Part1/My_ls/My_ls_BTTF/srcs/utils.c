/*
** EPITECH PROJECT, 2022
** UTILS_C
** File description:
** utils functions
*/

#include "my_ls.h"

int parse_flags(char *flags, char c)
{
    int i = 0;

    while (flags[i]) {
        if (flags[i] == c)
            return 1;
        i++;
    }
    return 0;
}