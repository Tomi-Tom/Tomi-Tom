/*
** EPITECH PROJECT, 2021
** GAME_LAUNCH_C
** File description:
** the game launcher functions
*/

#include "my_runner.h"

all_t begining(all_t a)
{
    if (a.color.r != 255) {
        a.color.r += 1;
        a.color.g += 1;
        a.color.b += 1;
    }
    a = display_bg(a, a.color);
    a = display_ground(a, a.color);
    a = display_heros(a, a.color);
    return a;
}

all_t game_launch(all_t a)
{
    int opt = 0;

    sfMusic_stop(a.lvl[0].music);
    sfMusic_play(a.lvl[0].music);
    a.color.r = 0;
    a.color.g = 0;
    a.color.b = 0;
    a.heros[a.perso].vec[0].x = 0.30 * 1920;
    while (a.quit == 0) {
        opt = poll_event_game(a);
        if (opt == 7)
            a = display_pause(a);
        a = begining(a);
        sfRenderWindow_display(a.window);
    }
    return a;
}
