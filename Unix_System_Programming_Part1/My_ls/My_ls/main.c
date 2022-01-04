/*
** EPITECH PROJECT, 2021
** MAIN_C
** File description:
** main of my_ls
*/

#include "my_ls.h"

void free_everything(char **files, char *flags)
{
    int i = 0;

    while (files[i]) {
        free(files[i]);
        i++;
    }
    free(files);
    free(flags);
}

void free_list(char **list_f)
{
    int i = 0;

    while (list_f[i]) {
        free(list_f[i]);
        i++;
    }
    free(list_f);
}

int main(int ac, char **av)
{
    char **files = bubble_sort(find_files(ac, av));
    int i = 0;
    char *flags = parse_flags(ac, av);
    char **list_f;

    while (files[i]) {
        list_f = bubble_sort(dirarg_list(flags, files[i]));
        display_format(list_f, files[i], my_len_nbfiles(ac, av), flags);
        display(list_f, flags, files[i]);
        if ((files[i + 1])) {
            write(1, "\n", 1);
            write(1, "\n", 1);
        }
        free_list(list_f);
        i++;
    }
    write(1, "\n", 1);
    free_everything(files, flags);
    return 0;
}
