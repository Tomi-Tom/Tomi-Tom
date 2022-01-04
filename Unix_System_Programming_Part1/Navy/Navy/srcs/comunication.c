/*
** EPITECH PROJECT, 2021
** COMUNICATION_C
** File description:
** functions to send signals
*/

#include "my_navy.h"

char my_btoa(char *b)
{
    int res = 0;
    int i = 0;
    int demult = 128;

    while (b[i]) {
        if (b[i] == '1') {
            res = res + demult;
        }
        demult /= 2;
        i++;
    }
    return res;
}

char *my_atob(char c)
{
    int as = c;
    int demult = 128;
    char *res = malloc(sizeof(char) * 9);

    res[0] = '\0';
    while (demult >= 1) {
        if (as / demult == 1) {
            my_strccat(res, '1');
            as = as - demult;
        } else if (as / demult == 0) {
            my_strccat(res, '0');
        }
        demult /= 2;
    }
    return res;
}

void send_signal_car(char c, int id)
{
    char *sig = my_strdup(my_atob(c));
    int i = 0;

    usleep(500);
    while (sig[i]) {
        if (sig[i] == '0') {
            kill(id, SIGUSR2);
        } else if (sig[i] == '1') {
            kill(id, SIGUSR1);
        }
        usleep(250);
        i++;
    }
}

void message(char *mes, int id)
{
    int i = 0;

    usleep(1);
    send_signal_car('*', id);
    while (mes[i]) {
        send_signal_car(mes[i], id);
        usleep(1);
        i++;
    }
    send_signal_car('+', id);
    return;
}