/*
** EPITECH PROJECT, 2021
** UTILS_C
** File description:
** utils functions for my_ls
*/

#include "my_ls.h"

int flags_len(int ac, char **av)
{
    int i = 1;
    int j = 1;
    int count = 0;

    while (i < ac) {
        while (av[i][j] && av[i][0] == '-') {
            count++;
            j++;
        }
        j = 0;
        i++;
    }
    return (count);
}

char *parse_flags(int ac, char **av)
{
    int i = 1;
    int j = 1;
    int count = 0;
    char *str = malloc(sizeof(char) * (flags_len(ac, av) + 1));

    while (i < ac) {
        while (av[i][j] && av[i][0] == '-') {
            str[count] = av[i][j];
            count++;
            j++;
        }
        j = 1;
        i++;
    }
    str[count] = '\0';
    return (str);
}

int my_len_nbfiles(int ac, char **av)
{
    int i = 1;
    int count = 0;

    while (i < ac) {
        if (av[i][0] != '-')
            count++;
        i++;
    }
    return count;
}

char **find_files(int ac, char **av)
{
    char **tab;
    int i = 1;
    int j = 0;

    tab = malloc(sizeof(char *) * (my_len_nbfiles(ac, av) + 1));
    tab[0] = my_strdup("./\0");
    while (i < ac) {
        if (av[i][0] != '-') {
            tab[j] = malloc(sizeof(char) * (my_strlen(av[i]) + 1));
            my_strcpy2(tab[j], av[i]);
            j++;
        }
        i++;
    }
    return tab;
}

void display_format(char **files, char *name, int oui, char *flags)
{
    struct stat stat;
    int j = 0;
    int total = 0;

    while (files[j]) {
        lstat(files[j], &stat);
        total = total + stat.st_blocks;
        j++;
    }
    if (oui > 1) {
        write(1, name, my_strlen(name) - 1);
        my_putstr(":\n");
    }
    if (is_flag('l', flags)) {
        my_putstr("total ");
        my_put_nbr(total / 2);
        my_putchar('\n');
    }
}