/*
** EPITECH PROJECT, 2021
** FLAG_L_C
** File description:
** the flag l gestion file
*/

#include "my_ls.h"

char *my_add_path(char *path, char *file)
{
    char *res = malloc(sizeof(char) * (my_strlen(file) + my_strlen(path) + 2));
    res[0] = '\0';
    res = my_strcat(res, path);
    res = my_strcat(res, file);
    return res;
}

void display_flag_l(char **list_f, char *flags, char *file)
{
    int len = my_dir_list_len(flags, file);
    char *tmp;
    int i = 0;
    struct stat stock;

    while (i < len) {
        tmp = my_add_path(file, list_f[i]);
        stat(tmp, &stock);
        display_auth(tmp);
        display_link(tmp);
        display_grp_usr_name(tmp);
        display_size(tmp);
        display_time(tmp);
        write(1, " ", 1);
        my_putstr(list_f[i]);
        if (i != len - 1)
            write(1, "\n", 2);
        i++;
    }
}
