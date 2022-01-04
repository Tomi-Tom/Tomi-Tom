/*
** EPITECH PROJECT, 2021
** BEGIN_C
** File description:
** begining of program
*/

#include "my_navy.h"

int begin(int ac, char **av)
{
    int i = 0;
    pid_t info1;

    info1 = getpid();
    printf("PID = [%d]\n", info1);
    while (1) {
        if (i % 2 == 0)
            kill(atoi(av[1]), SIGUSR1);
        if (i % 2 == 1)
            kill(atoi(av[1]), SIGUSR2);
        my_putstr(av[0]);
        my_put_nbr(ac);
        sleep(0.1);
        i++;
    }
    return 0;
}