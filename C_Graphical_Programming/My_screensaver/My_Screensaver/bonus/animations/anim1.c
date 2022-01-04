/*
** EPITECH PROJECT, 2021
** ANIMATION_C
** File description:
** animation 1
*/

#include "my_scsv.h"

all_t reinit_line(all_t all)
{
    if (all.i == all.height) {
        all.i = 0;
        all.color[1] = generate_color();
    }
    if (all.j == all.width) {
        all.j = 0;
        all.color[2] = generate_color();
    }
    if (all.k == all.height) {
        all.k = 0;
        all.color[3] = generate_color();
    }
    if (all.l == all.width) {
        all.l = 0;
        all.color[4] = generate_color();
    }
    return all;
}

all_t anim1_2(all_t all)
{
    all = reinit_line(all);
    if (all.i == 540)
        all.lim1 = 1;
    if (all.j == 960)
        all.lim2 = 1;
    if (all.lim1)
        all.k++;
    if (all.lim2)
        all.l++;
    all.i++;
    all.j++;
    all.count++;
    return all;
}

all_t display_main(fb_t *fb, all_t all)
{
    my_put_line(fb, all.width, all.i, all.color[1]);
    my_put_colum(fb, all.j, all.height, all.color[2]);
    my_put_line(fb, all.width, all.height - all.i, all.color[1]);
    my_put_colum(fb, all.width - all.j, all.height, all.color[2]);
    if (all.lim1) {
        all.color[3] = nuance_color(all.color[3], &all);
        my_put_line(fb, all.width, all.k, all.color[3]);
        my_put_line(fb, all.width, all.height - all.k, all.color[3]);
    }
    if (all.lim2) {
        all.color[4] = nuance_color(all.color[4], &all);
        my_put_colum(fb, all.l, all.height, all.color[4]);
        my_put_colum(fb, all.width - all.l, all.height, all.color[4]);
    }
    return all;
}

all_t animation1(all_t all, fb_t *fb)
{
    while (all.count < all.limite) {
        all.color[1] = nuance_color(all.color[1], &all);
        all.color[2] = nuance_color(all.color[2], &all);
        all = display_main(fb, all);
        all = anim1_2(all);
    }
    all.count = 0;
    return all;
}
