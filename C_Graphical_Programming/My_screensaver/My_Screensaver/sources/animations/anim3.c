/*
** EPITECH PROJECT, 2021
** ANIM2_C
** File description:
** anim2
*/

#include "my_scsv.h"

sfColor generate_color4(void)
{
    int r = rand() % 255;
    int g = rand() % 255;
    int b = rand() % 255;

    sfColor color = {r, g, b, 25};
    return color;
}

all_t animation3(all_t all, fb_t *fb)
{
    int i = 0;
    int x = 0;
    int y = 0;
    int speed = 250000;
    sfColor color = generate_color4();

    while (i < speed) {
        color = generate_color4();
        x = rand() % all.width;
        y = rand() % all.height;
        my_put_pixel(fb, x, y, color);
        i++;
    }
    return all;
}
