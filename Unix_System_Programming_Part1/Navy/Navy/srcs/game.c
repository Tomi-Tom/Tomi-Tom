/*
** EPITECH PROJECT, 2021
** GAME_C
** File description:
** game functions
*/

#include "my_navy.h"

void display_status(tabcase **tab, tabcase **e_tab)
{
    my_putstr("my positions:\n");
    print_tab(tab);
    my_putstr("enemy's positions:\n");
    print_tab(e_tab);
}

void save_action(int hit, char *input, tabcase **e_tab)
{
    if (hit) {
        my_putstr("hit\n\n");
        e_tab[(int) (input[1] - '1')][(int) (input[0] - 'A')].is_touched = 1;
        e_tab[(int) (input[1] - '1')][(int) (input[0] - 'A')].isboat = 1;
        e_tab[(int) (input[1] - '1')][(int) (input[0] - 'A')].display = 'x';
    } else {
        my_putstr("missed\n\n");
        e_tab[(int) (input[1] - '1')][(int) (input[0] - 'A')].is_touched = 1;
        e_tab[(int) (input[1] - '1')][(int) (input[0] - 'A')].display = 'o';
    }
}

int my_turn(tabcase **tab, tabcase **e_tab, int mode)
{
    char input[3];
    char *msg;

    input[2] = '\0';
    if (mode != 84)
        display_status(tab, e_tab);
    my_putstr("attack: ");
    read(1, input, 2);
    if (my_str_is_eq(input, "\n"))
        read(1, input, 2);
    if (is_valid_pick(input) == 84) {
        my_putstr("wrong position\n");
        return my_turn(tab, e_tab, 84);
    }
    message(input, status->enemy_pid);
    msg = postbox();
    my_putstr(input);
    my_putstr(": ");
    save_action(my_str_is_eq(msg, "hit"), input, e_tab);
    return game_finished(e_tab, 1);
}

int wait_turn(tabcase **tab, tabcase **e_tab, int mode)
{
    int is_boat = 0;
    char *msg;

    my_putstr("waiting for enemy's attack...\n");
    msg = postbox();
    tab[(int) (msg[1] - '1')][(int) (msg[0] - 'A')].is_touched = 1;
    my_putstr(msg);
    my_putstr(": ");
    if (tab[(int) (msg[1] - '1')][(int) (msg[0] - 'A')].isboat > 0) {
        message("hit", status->enemy_pid);
        my_putstr("hit\n\n");
        tab[(int) (msg[1] - '1')][(int) (msg[0] - 'A')].display = 'x';
    } else {
        message("0", status->enemy_pid);
        tab[(int) (msg[1] - '1')][(int) (msg[0] - 'A')].display = 'o';
        my_putstr("missed\n\n");
    }
    return game_finished(e_tab, 0);
}

int main_game(tabcase **tab, tabcase **enemy_tab, int mode)
{
    char input[3];
    int end = 0;
    int turn = 0;

    input[2] = '\0';
    if (mode == 1)
        turn = 1;
    while (!end) {
        if (turn == 1)
            end = my_turn(tab, enemy_tab, mode);
        else
            end = wait_turn(tab, enemy_tab, mode);
        if (end > 0)
            return 0;
        turn = !turn;
    }
}