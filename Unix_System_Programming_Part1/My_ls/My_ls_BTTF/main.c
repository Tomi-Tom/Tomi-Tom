/*
** EPITECH PROJECT, 2021
** MAIN_C
** File description:
** main of my_ls
*/

#include "my_ls.h"

static arg_t parse_files_flags(int ac, char **av)
{
    arg_t arg;
    int i = 1;
    int dup = 0;

    arg.flags = malloc(sizeof(char) * 5);
    arg.flags[0] = '\0';
    arg.data = malloc(sizeof(char *) * ac);
    while (i < ac) {
        if (av[i][0] == '-') {
            my_strcat(arg.flags, &av[i][1]);
        } else {
            arg.data[dup] = my_strdup(av[i]);
            dup++;
        }
        i++;
    }
    if (!(arg.data[0]))
        arg.data[0] = my_strdup(".");
    return arg;
}

static int error_handling(arg_t arg)
{
    int i = 0;
    int fd = 0;

    while (arg.data[i]) {
        if (open(arg.data[i], O_RDONLY) == -1)
            return 84;
        close(fd);
        i++;
    }
    i = 0;
    while (arg.flags[i]) {
        if (arg.flags[i] != 'l' && arg.flags[i] != 'R' && arg.flags[i] != 't')
            return 84;
        i++;
    }
    return 0;
}

int main(int ac, char **av)
{
    arg_t arg = parse_files_flags(ac, av);

    if (error_handling(arg))
        return 84;
    if (my_ls(arg.data, arg.flags))
        return 84;
    return 0;
}
