/*
** EPITECH PROJECT, 2021
** ANIM5_C
** File description:
** animation 5
*/

#include "my_scsv.h"

void forward1(all_t all, fb_t *fb)
{
    int i = 0;
    static int ctl[] = {0, 270, 540, 810, 1080};
    int j = 1;
    sfColor color = generate_color();

    while (i < 4) {
        color = generate_color();
        j = 1;
        if (ctl[i] == all.height)
            ctl[i] = 0;
        my_put_line(fb, all.width, ctl[i], color);
        while (j < 5 && (ctl[i] - j) >= 0) {
            clean_line(fb, all.width, ctl[i] - j);
            j++;
        }
        ctl[i]++;
        i++;
    }
}

void backward1(all_t all, fb_t *fb)
{
    int i = 4;
    static int ctl1[] = {0, 270, 540, 810, 1080};
    int j = 1;
    sfColor color = generate_color();

    while (i > 0) {
        color = generate_color();
        j = 1;
        if (ctl1[i] == 0)
            ctl1[i] = all.height;
        my_put_line(fb, all.width, ctl1[i], color);
        while (j < 5 && (ctl1[i] + j) <= all.height) {
            clean_line(fb, all.width, ctl1[i] + j);
            j++;
        }
        ctl1[i]--;
        i--;
    }
}

all_t animation5(all_t all, fb_t *fb)
{
    forward1(all, fb);
    backward1(all, fb);
    return all;
}
