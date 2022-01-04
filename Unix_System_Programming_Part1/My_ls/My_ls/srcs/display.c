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

void display_without_flags(char **list_f, char *flags, char *file)
{
    int len = my_dir_list_len(flags, file);
    int i = 0;

    while (i < len) {
        my_putstr(list_f[i]);
        if (i != len - 1)
            write(1, "  ", 2);
        i++;
    }
}

void display(char **list_f, char *flags, char *file)
{
    if (flags[0] == '\0')
        display_without_flags(list_f, flags, file);
    if (is_flag('a', flags) && flags[1] == '\0')
        display_flag_a(list_f, flags, file);
    if (is_flag('l', flags))
        display_flag_l(list_f, flags, file);
}
