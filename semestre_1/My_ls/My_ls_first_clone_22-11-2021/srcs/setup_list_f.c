/*
** EPITECH PROJECT, 2021
** SETUP_LIST_F_C
** File description:
** setup list_f with name files in directory .
*/

#include "my_ls.h"

int my_dir_list_len(char *flags)
{
    int i = 0;
    int j = 0;
    DIR *dir;
    struct dirent *poire;

    dir = opendir(".");
    while ((poire = readdir(dir))) {
        if (!(is_flag('a', flags)) && poire->d_name[0] == '.')
            j++;
        i++;
    }
    closedir(dir);
    return i - j;
}

char **dirarg_list(char *flags)
{
    DIR *dir;
    struct dirent *poire;
    char **list = malloc(sizeof(char *) * (my_dir_list_len(flags) + 1));
    int i = 0;
    int j = 0;

    dir = opendir(".");
    while ((poire = readdir(dir))) {
        if (!(is_flag('a', flags)) && poire->d_name[0] == '.') {
            j++;
        } else {
            list[i - j] = malloc((my_strlen(poire->d_name) + 1) * sizeof(char));
            my_strcpy(list[i - j], poire->d_name);
        }
        i++;
    }
    list[i - j] = 0;
    return list;
}