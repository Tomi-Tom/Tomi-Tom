/*
** EPITECH PROJECT, 2021
** DISPLAY_GROUND_C
** File description:
** display de ground
*/

#include "my_runner.h"

all_t display_back_ground(all_t a, sfColor color)
{
    int i = 0;

    while (i < 2) {
        a.ground[2].vec[i].x -= 12;
        if (a.ground[2].vec[i].x <= -1920)
            a.ground[2].vec[i].x = 1920;
        sfSprite_setColor(a.ground[2].sprite, color);
        sfSprite_setPosition(a.ground[2].sprite, a.ground[2].vec[i]);
        sfRenderWindow_drawSprite(a.window, a.ground[2].sprite, NULL);
        i++;
    }
    return a;
}

all_t display_ground_ground(all_t a, sfColor color)
{
    int i = 0;

    while (i < 2) {
        a.ground[0].vec[i].x -= 16;
        if (a.ground[0].vec[i].x <= -1920)
            a.ground[0].vec[i].x = 1920;
        sfSprite_setColor(a.ground[0].sprite, color);
        sfSprite_setPosition(a.ground[0].sprite, a.ground[0].vec[i]);
        sfRenderWindow_drawSprite(a.window, a.ground[0].sprite, NULL);
        i++;
    }
    return a;
}

all_t display_front_ground(all_t a, sfColor color)
{
    int i = 0;

    while (i < 2) {
        a.ground[1].vec[i].x -= 20;
        if (a.ground[1].vec[i].x <= -1920)
            a.ground[1].vec[i].x = 1920;
        sfSprite_setColor(a.ground[1].sprite, color);
        sfSprite_setPosition(a.ground[1].sprite, a.ground[1].vec[i]);
        sfRenderWindow_drawSprite(a.window, a.ground[1].sprite, NULL);
        i++;
    }
    return a;
}

all_t display_ground(all_t a, sfColor color)
{
    a = display_back_ground(a, color);
    a = display_ground_ground(a, color);
    a = display_front_ground(a, color);
    return a;
}