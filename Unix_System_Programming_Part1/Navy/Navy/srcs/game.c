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
    my_putstr("\nenemy's positions:\n");
    print_tab(e_tab);
}

void save_action(int hit, char *input, tabcase **e_tab)
{
    if (hit) {
        my_putstr("hit\n\n");
        e_tab[(int) (input[0] - 'A')][(int) (input[1] - '1')].is_touched = 1;
        e_tab[(int) (input[0] - 'A')][(int) (input[1] - '1')].isboat = 1;
        e_tab[(int) (input[0] - 'A')][(int) (input[1] - '1')].display = 'x';
    } else {
        my_putstr("missed\n\n");
        e_tab[(int) (input[0] - 'A')][(int) (input[1] - '1')].is_touched = 1;
        e_tab[(int) (input[0] - 'A')][(int) (input[1] - '1')].display = 'o';
    }
}

int my_turn(tabcase **tab, tabcase **e_tab, int mode)
{
    char *input = my_strdup("\0\0\0");
    char *msg;

    display_status(tab, e_tab);
    my_putstr("attack : ");
    read(1, input, 2);
    if (is_valid_pick(input))
        return 84;
    message(input, status->enemy_pid);
    msg = postbox();
    my_putstr(input);
    my_putstr(": ");
    if (my_str_is_eq(msg, "hit")) {
        save_action(1, input, e_tab);
    } else {
        save_action(0, input, e_tab);
    }
    return 0;
}

int wait_turn(tabcase **tab, tabcase **e_tab, int mode)
{
    int is_boat = 0;
    char *msg;

    display_status(tab, e_tab);
    my_putstr("waiting for enemy's attack...\n");
    msg = postbox();
    if (is_valid_pick(msg))
        return 84;
    tab[(int) (msg[1] - '1')][(int) (msg[0] - 'A')].is_touched = 1;
    my_putstr(msg);
    my_putstr(": ");
    if (tab[(int) (msg[1] - '1')][(int) (msg[0] - 'A')].isboat > 0) {
        message("hit", status->enemy_pid);
        my_putstr("hit\n");
        tab[(int) (msg[1] - '1')][(int) (msg[0] - 'A')].display = 'x';
    } else {
        message("0", status->enemy_pid);
        tab[(int) (msg[1] - '1')][(int) (msg[0] - 'A')].display = 'o';
        my_putstr("missed\n");
    }
    return 1;
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
            turn = my_turn(tab, enemy_tab, mode);
        else
            turn = wait_turn(tab, enemy_tab, mode);
        if (turn == 84)
            return 84;
    }
    return 0;
}