/*
** EPITECH PROJECT, 2021
** COMUNICATION_C
** File description:
** functions to send signals
*/

#include "my_navy.h"

int check_msg_end(void)
{
    int i = 0;
    char *bin = malloc(sizeof(char) * 9);

    bin[8] = '\0';
    while (i < 10) {
        bin[7 - i] = status->msg[my_strlen(status->msg) - i - 1];
        i++;
    }
    if (my_btoa(bin) == '+')
        return 1;
    return 0;
}

void clear_msg(void)
{
    int i = 0;

    while (status->msg[i]) {
            status->msg[i] = '\0';
            i++;
    }
}

char *convert_recieve(void)
{
    int i = 8;
    char *sig = malloc(sizeof(char) * 101);

    sig[0] = '\0';
    while (status->msg[i + 8]) {
        my_strccat(sig, my_btoa(&status->msg[i]));
        i += 8;
    }
    clear_msg();
    return sig;
}

char *postbox(void)
{
    int i = 0;

    signal(SIGUSR1, usr_1);
    signal(SIGUSR2, usr_2);
    while (!(check_msg_end())) {
        while (i < 8) {
            pause();
            i++;
        }
        i = 0;
    }
    return (convert_recieve());
}
