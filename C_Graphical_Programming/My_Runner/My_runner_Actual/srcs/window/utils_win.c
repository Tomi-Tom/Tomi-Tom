/*
** EPITECH PROJECT, 2021
** UTILS_WIN_C
** File description:
** utils functions for window
*/

#include "my_runner.h"

int poll_event(all_t a)
{
    while (sfRenderWindow_pollEvent(a.window, &a.event)) {
        if (a.event.type == sfEvtClosed) {
            return 1;
        }
    }
    return 0;
}

int poll_event_game(all_t a)
{
    while (sfRenderWindow_pollEvent(a.window, &a.event)) {
        if (sfKeyboard_isKeyPressed(sfKeyEscape))
            return 7;
        if (sfKeyboard_isKeyPressed(sfKeyEnter))
            return 9;
        if (sfKeyboard_isKeyPressed(sfKeyUp))
            return 8;
        if (sfKeyboard_isKeyPressed(sfKeyLeft))
            return 4;
        if (sfKeyboard_isKeyPressed(sfKeyRight))
            return 6;
        if (sfKeyboard_isKeyPressed(sfKeyDown))
            return 2;
        if (sfKeyboard_isKeyPressed(sfKeySpace))
            return 10;
    }
    return 0;
}
