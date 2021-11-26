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

int main(int ac, char **av)
{
    int             fd = 0;
    char            *buf;
    struct stat     stock;
    char            **map;

    if (ac == 2) {
        fd = open(av[1], O_RDONLY);
        stat(av[1], &stock);
        buf = malloc(sizeof(char) * (stock.st_size + 1));
        read(fd, buf, stock.st_size);
        map = my_str_to_word_array(buf);
        bsq(map);
        my_show_word_array(map);
        free_arr(map);
        free(map);
        free(buf);
    }
    return 0;
}
