/*
** EPITECH PROJECT, 2022
** MY_LS_NOF
** File description:
** my_ls functions for the gestion of no flags
*/

#include "my_ls.h"

static int files_len(char **files)
{
    int i = 0;

    while (files[i]) {
        i++;
    }
    return i;
}

static int display_files(char *file)
{
    DIR *d = opendir(file);
    struct dirent *p;

    if (!(d)) {
        my_putstr(file);
        return 0;
    }
    my_putstr(file);
            my_putstr(":\n");
    p = readdir(d);
    while (p) {
        if (p->d_name[0] != '.')
            my_putstr(p->d_name);
        p = readdir(d);
        if (p && p->d_name[0] != '.')
            my_putstr("  ");
    }
    return 0;
}

int display_noflags(char **files)
{
    int i = 0;
    int err = 0;

    if (files_len(files) == 1) {
        display_files(files[0]);
    } else {
        while (files[i]) {
            err = display_files(files[i]);
            my_putstr(files[i + 1] ? "\n\n" : "\n");
            i++;
        }
    }
    if (err)
        return 84;
    return 0;
}