/*
** EPITECH PROJECT, 2021
** MAIN_C
** File description:
** main
*/

#include "my_runner.h"

void display_game_help(void)
{
    my_putstr("\n\t\t +----------------------------------------+ \n");
    my_putstr("\t\t |   MY_RUNNER project : The Adventure    | \n");
    my_putstr("\t\t +----------------------------------------+ \n\n");
    my_putstr("MENU :\n");
    my_putstr(" =>\t\n\n");
    my_putstr("GAMEPLAY :\n");
    my_putstr(" =>\t\n");
}

void display_help(void)
{
    my_putstr("\n\t\t +----------------------------------------+ \n");
    my_putstr("\t\t |   MY_RUNNER project : The Adventure    | \n");
    my_putstr("\t\t +----------------------------------------+ \n\n");
    my_putstr("USAGE :\n");
    my_putstr(" =>\t ./my_runner [OPTIONS]\n\n");
    my_putstr("OPTIONS :\n");
    my_putstr(" =>\t  -g\t -> print the game commands and quit.\n");
    my_putstr(" =>\t  -h\t -> print the usage and quit.\n\n");
    my_putstr("\n      /!\\ IF YOU WANT TO KNOW HOW TO PLAY /!\\\n");
    my_putstr("   /!\\ YOU CAN CLICK ON THE HELP MENU IN GAME /!\\\n\n\n");
}

int error_handling(int ac, char **av)
{
    if (ac > 2)
        return 84;
    if (ac == 2) {
        if (av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
            display_help();
            return 1;
        } else if (av[1][0] == '-' && av[1][1] == 'g' && av[1][2] == '\0') {
            display_game_help();
            return 1;
        } else {
            return 84;
        }
    }
    return 0;
}

int main(int ac, char **av)
{
    int err = 0;

    err = error_handling(ac, av);
    if (err == 84)
        return 84;
    if (err == 1)
        return 0;
    srand(time(NULL));
    window();
    return 0;
}