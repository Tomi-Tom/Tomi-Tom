/*
** EPITECH PROJECT, 2021
** navy
** File description:
** endgame.c
*/

#include "my_navy.h"

int boat_not_touched(tabcase entity)
{
    if (entity.isboat > 0 && entity.is_touched == 0)
        return 1;
    else
        return 0;
}

int game_finished(tabcase **game, int is_my_turn)
{
    int result = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            result += boat_not_touched(game[i][j]);
        }
    }
    if (result > 0 && is_my_turn == 1)
        my_putstr("I won\n");
    else if (result > 0 && is_my_turn == 0)
        my_putstr("Enemy won\n");
    return (result > 0);
}
