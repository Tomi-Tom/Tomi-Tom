/*
** EPITECH PROJECT, 2021
** MAIN_C
** File description:
** the main file for the BSQ project
*/

#include "bsq.h"

void free_arr(char **map)
{
    int i = 0;

    while (map[i]) {
        free(map[i]);
        i++;
    }
}

void free_everything(char *buf, char **map)
{
    free_arr(map);
    free(map);
    free(buf);
}

void do_things(char **map, char *buf)
{
    bsq(map);
    my_show_word_array(map);
    free_everything(buf, map);
}

int error_handling(int fd, char *str)
{
    char            *buf;
    struct stat     stock;

    stat(str, &stock);
    if (stock.st_size == 0)
        return 84;
    buf = malloc(sizeof(char) * (stock.st_size + 1));
    if (read(fd, buf, stock.st_size) <= 0)
        return 84;
    free(buf);
    return 0;
}

int main(int ac, char **av)
{
    int             fd = 0;
    char            *buf;
    struct stat     stock;
    char            **map;

    if (ac == 2) {
        fd = open(av[1], O_RDONLY);
        if (fd == -1 || error_handling(fd, av[1]))
            return 84;
        stat(av[1], &stock);
        buf = malloc(sizeof(char) * (stock.st_size + 1));
        read(fd, buf, stock.st_size);
        buf[stock.st_size + 1] = '\0';
        map = my_str_to_word_array(buf);
        if (check_error(map) == 84)
            return 84;
        do_things(map, buf);
    } else
        return 84;
    return 0;
}
