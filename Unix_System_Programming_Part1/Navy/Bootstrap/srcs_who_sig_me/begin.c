/*
** EPITECH PROJECT, 2021
** BEGIN_C
** File description:
** begining of program
*/

#include "my_navy.h"

void sig_handler1(int signum)
{
    printf("[1]\n");
}

void sig_handler2(int signum)
{
    printf("[2]\n");
}

int begin(int ac, char **av)
{
    pid_t info1;

    info1 = getpid();
    printf("PID = [%d]\n", info1);
    signal(SIGUSR1,sig_handler1);
    signal(SIGUSR2,sig_handler2);
    while (1) {
    }
    return 0;
}