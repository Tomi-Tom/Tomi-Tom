/*
** EPITECH PROJECT, 2021
** MAIN_C
** File description:
** the main file of the programm
*/

#include "my_scsv.h"

int main(int ac, char **av)
{
    srand(time(NULL));
    if (ac == 2) {
        if (is_error(av))
            return 84;
        if (av[1][0] == '-' && av[1][1] == 'd') {
            display_anim_help();
        } else if (av[1][0] == '-' && av[1][1] == 'h') {
            display_help();
        } else {
            window(my_getnbr(av[1]));
        }
        return 0;
    }
    write(2, "[84] Syntax error : please use \"./my_screensaver -h\"\n", 53);
    return 84;
}
