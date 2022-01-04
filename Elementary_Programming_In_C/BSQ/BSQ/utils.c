/*
** EPITECH PROJECT, 2021
** UTILS_C
** File description:
** utils functions
*/

#include "bsq.h"

int check_char(char *str, int comp)
{
    int i = 0;

    while (str[i]) {
        if (str[i] != '.' && str[i] != 'o' && str[i])
            return 84;
        i++;
    }
    if (i != comp)
        return 84;
    return 0;
}

int check_error(char **map)
{
    int i = 1;
    int comp = my_strlen(map[1]);
    int lines = my_getnbr(map[0]);

    while (map[i]) {
        if (check_char(map[i], comp))
            return 84;
        i++;
    }
    if (lines != i - 1)
        return 84;
    return 0;
}