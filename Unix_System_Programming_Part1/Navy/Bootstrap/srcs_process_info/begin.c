/*
** EPITECH PROJECT, 2021
** BEGIN_C
** File description:
** begining of program
*/

#include "my_navy.h"

int process_info(int ac, char **av)
{
    pid_t info;

    my_putstr(av[0]);
    my_putchar('\n');
    my_put_nbr(ac);
    my_putchar('\n');
    info = getpid();
    printf("PID = [%d]\n", info);
    while (1){
    }
    return 0;
}


int begin(int ac, char **av)
{
    return (process_info(ac, av));
}