/*
** EPITECH PROJECT, 2021
** CONNECT_C
** File description:
** connections functions
*/

#include "my_navy.h"

int player_1_co(void)
{
    int i = 0;
    int j = 0;
    char *stock;

    my_putstr("my pid = ");
    my_put_nbr(getpid());
    my_putstr("\nwaiting for enemy connection...\n\n");
    status->enemy_pid = my_getnbr(postbox());
    message("OK", status->enemy_pid);
    if (my_strcmp(postbox(), "OK"))
        return 84;
    my_putstr("enemy connected\n\n");
    return 0;
}

int player_2_co(int id)
{
    int i = 0;

    status->enemy_pid = id;
    my_putstr("my pid = ");
    my_put_nbr(getpid());
    message(my_itoa(getpid()), id);
    if (my_strcmp(postbox(), "OK"))
        return 84;
    message("OK", status->enemy_pid);
    my_putstr("\nsuccefully connected\n\n");
    return 0;
}

int connect(int mode, char **av)
{
    int err = 0;

    if (mode == 1) {
        err = player_1_co();
    } else if (mode == 2) {
        err = player_2_co(my_getnbr(av[1]));
    } else {
        return 84;
    }
    if (err)
        return 84;
    return 0;
}
