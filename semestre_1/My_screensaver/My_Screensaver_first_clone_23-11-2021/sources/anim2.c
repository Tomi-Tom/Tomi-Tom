/*
** EPITECH PROJECT, 2021
** ANIM2_C
** File description:
** anim2
*/

#include "my_scsv.h"

sfColor set_color_black(void)
{
    sfColor color;

    int r = 0;
    int g = 0;
    int b = 0;

    color.r = r;
    color.g = g;
    color.b = b;
    color.a = 8;
    return color;
}

void clean_fb(fb_t *fb, all_t all)
{
    int i = 0;
    int j = 0;
    sfColor color = set_color_black();

    while (i < all.height) {
        while (j < all.width) {
            my_put_pixel(fb,j, i, color);
            j++;
        }
        j = 0;
        i++;
    }
}

all_t animation2(all_t all, fb_t *fb)
{
    all.count++;
    all.color[1] = nuance_color(all.color[1], &all);
    all.color[2] = nuance_color(all.color[2], &all);
    all.i = rand() % all.height;
    all.j = rand() % all.width;
    my_put_line(fb, all.width, all.i, all.color[1]);
    my_put_colum(fb, all.j, all.height, all.color[2]);
    if (all.count == 500) {
        all.count = 0;
        clean_fb(fb, all);
    }
    return all;
}
