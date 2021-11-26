/*
** EPITECH PROJECT, 2021
** MAIN_C
** File description:
** main of my_ls
*/

#include "my_ls.h"

int flags_len(int ac, char **av)
{
    int i = 1;
    int j = 1;
    int count = 0;

    while (i < ac) {
        while (av[i][j]) {
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
        while (av[i][j]) {
            str[count] = av[i][j];
            count++;
            j++;
        }
        j = 1;
        i++;
    }
    return (str);
}

int main(int ac, char **av)
{
    char *flags = parse_flags(ac, av);
    char **list_f = bubble_sort(dirarg_list(flags));

    display(list_f, flags);
    write(1, "\n", 1);
    printf("\n\n j'ai les flags [%s]\n", flags);
    return 0;
}
