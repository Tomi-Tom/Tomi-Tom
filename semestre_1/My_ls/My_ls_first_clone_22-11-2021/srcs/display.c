/*
** EPITECH PROJECT, 2021
** DISPLAY_C
** File description:
** display the my_ls
*/

#include "my_ls.h"

int is_flag(char c, char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] == c)
            return 1;
        i++;
    }
    return 0;
}

void display(char **list_f, char *flags)
{
    int len = my_dir_list_len(flags);
    int i = 0;

    while (i < len) {
        my_putstr(list_f[i]);
        if (i != len - 1)
            write(1, "  ", 2);
        i++;
    }
}
