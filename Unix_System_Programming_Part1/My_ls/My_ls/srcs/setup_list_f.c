/*
** EPITECH PROJECT, 2021
** SETUP_LIST_F_C
** File description:
** setup list_f with name files in directory .
*/

#include "my_ls.h"

int my_dir_list_len(char *flags, char *file)
{
    int i = 0;
    int j = 0;
    DIR *dir;
    struct dirent *poire;
    struct stat stock;

    stat(file, &stock);
    dir = opendir(file);
    while ((poire = readdir(dir))) {
        if (!(is_flag('a', flags)) && poire->d_name[0] == '.')
            j++;
        i++;
    }
    closedir(dir);
    return i - j;
}

char **dirarg_list(char *flags, char *file)
{
    DIR *dir;
    struct dirent *poire;
    char **list = malloc(sizeof(char *) * (my_dir_list_len(flags, file) + 1));
    int i = 0;
    int j = 0;
    struct stat stock;

    stat(file, &stock);
    dir = opendir(file);
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
    closedir(dir);
    return list;
}