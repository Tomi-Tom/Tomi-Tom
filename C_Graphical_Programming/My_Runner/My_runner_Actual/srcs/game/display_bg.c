/*
** EPITECH PROJECT, 2021
** DISPLAY_BG_C
** File description:
** display background for game
*/

#include "my_runner.h"

all_t display_back(all_t a, sfColor color)
{
    int i = 0;

    while (i < 2) {
        a.bg[0].vec[i].x -= 1;
        if (a.bg[0].vec[i].x <= -1920)
            a.bg[0].vec[i].x = 1920;
        sfSprite_setColor(a.bg[0].sprite, color);
        sfSprite_setPosition(a.bg[0].sprite, a.bg[0].vec[i]);
        sfRenderWindow_drawSprite(a.window, a.bg[0].sprite, NULL);
        i++;
    }
    return a;
}

all_t display_mid(all_t a, sfColor color)
{
    int i = 0;

    while (i < 2) {
        a.bg[1].vec[i].x -= 2;
        if (a.bg[1].vec[i].x <= -1920)
            a.bg[1].vec[i].x = 1920;
        sfSprite_setColor(a.bg[1].sprite, color);
        sfSprite_setPosition(a.bg[1].sprite, a.bg[1].vec[i]);
        sfRenderWindow_drawSprite(a.window, a.bg[1].sprite, NULL);
        i++;
    }
    return a;
}

all_t display_front(all_t a, sfColor color)
{
    int i = 0;

    while (i < 2) {
        a.bg[2].vec[i].x -= 4;
        if (a.bg[2].vec[i].x <= -1920)
            a.bg[2].vec[i].x = 1920;
        sfSprite_setColor(a.bg[2].sprite, color);
        sfSprite_setPosition(a.bg[2].sprite, a.bg[2].vec[i]);
        sfRenderWindow_drawSprite(a.window, a.bg[2].sprite, NULL);
        i++;
    }
    return a;
}

all_t display_bg(all_t a, sfColor color)
{
    a = display_back(a, color);
    a = display_mid(a, color);
    a = display_front(a, color);
    return a;
}