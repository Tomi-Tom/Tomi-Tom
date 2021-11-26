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
        window(my_getnbr(av[1]));
        return 0;
    }
    return 84;
}
