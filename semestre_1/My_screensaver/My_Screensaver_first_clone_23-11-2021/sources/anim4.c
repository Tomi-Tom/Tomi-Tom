/*
** EPITECH PROJECT, 2021
** ANIM4_C
** File description:
** animation 4
*/

#include "my_scsv.h"

sfColor set_color_black3(void)
{
    sfColor color;

    int r = 0;
    int g = 0;
    int b = 0;

    color.r = r;
    color.g = g;
    color.b = b;
    color.a = 6;
    return color;
}

void forward(all_t all, fb_t *fb)
{
    int i = 0;
    static int ctl[] = {0, 240, 480, 720, 960, 1200, 1440, 1680, 1920};
    int j = 1;
    sfColor color = generate_color();

    while (i < 9) {
        color = generate_color();
        j = 1;
        if (ctl[i] == all.width)
            ctl[i] = 0;
        my_put_colum(fb, ctl[i], all.height, color);
        while (j < 5 && (ctl[i] - j) >= 0) {
            clean_colum(fb, ctl[i] - j, all.height);
            j++;
        }
        ctl[i]++;
        i++;
    }
}

void backward(all_t all, fb_t *fb)
{
    int i = 8;
    static int ctl1[] = {0, 240, 480, 720, 960, 1200, 1440, 1680, 1920};
    int j = 1;
    sfColor color = generate_color();

    while (i > 0) {
        color = generate_color();
        j = 1;
        if (ctl1[i] == 0)
            ctl1[i] = all.width;
        my_put_colum(fb, ctl1[i], all.height, color);
        while (j < 5 && (ctl1[i] + j) <= all.width) {
            clean_colum(fb, ctl1[i] + j, all.height);
            j++;
        }
        ctl1[i]--;
        i--;
    }
}

all_t animation4(all_t all, fb_t *fb)
{
    forward(all, fb);
    backward(all, fb);
    return all;
}
