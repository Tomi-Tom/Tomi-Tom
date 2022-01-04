/*
** EPITECH PROJECT, 2021
** FLAG_A_C
** File description:
** the flag a gestion file
*/

#include "my_ls.h"

void display_flag_a(char **list_f, char *flags, char *file)
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
