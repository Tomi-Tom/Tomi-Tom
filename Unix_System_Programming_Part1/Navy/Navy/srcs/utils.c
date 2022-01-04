/*
** EPITECH PROJECT, 2021
** UTILS_C
** File description:
** utils functions
*/

#include "my_navy.h"

int is_valid_pick(char *pick)
{
    if (pick[0] < 'A' || pick[0] > 'H') {
        return 84;
    }
    if (pick[1] < '1' || pick[1] > '8') {
        return 84;
    }
    return 0;
}

int my_str_is_eq(char *str1, char *str2)
{
    int i = 0;

    while (str1[i] && str2[i]) {
        if (str1[i] != str2[i])
            return 0;
        i++;
    }
    return str1[i] == str2[i];
}

int error_handling(int ac, char **av)
{
    int fd;

    if (ac != 2 && ac != 3)
        return 84;
    if (ac == 2)
        fd = open(av[1], O_RDONLY);
    if (ac == 3)
        fd = open(av[2], O_RDONLY);
    if (fd == -1)
        return 84;
    return 0;
}

int file_verification(char *buffer)
{
    if (my_strlen(buffer) < 31)
        return 0;
    for (int i = 0; i < 4; i++) {
        if (buffer[i * 8] < '2' || buffer[i * 8] > '5')
            return 0;
        if (buffer[i * 8 + 1] != ':' || buffer[i * 8 + 4] != ':')
            return 0;
        if (buffer[i * 8 + 2] < 'A' || buffer[i * 8 + 2] > 'H' ||
        buffer[i * 8 + 5] < 'A' || buffer[i * 8 + 5] > 'H')
            return 0;
        if (buffer[i * 8 + 3] < '1' || buffer[i * 8 + 3] > '8' ||
        buffer[i * 8 + 6] < '1' || buffer[i * 8 + 6] > '8')
            return 0;
    }
    return 1;
}