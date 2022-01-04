/*
** EPITECH PROJECT, 2021
** ANIM5_C
** File description:
** animation 5
*/

#include "my_scsv.h"

sfColor generate_d(void)
{
    sfColor color = {0, 0, 0, 30};
    return color;
}

void my_put_square_b(int x, int y, int size, fb_t *fb)
{
    int i = 0;
    int j = 0;

    while (i < size) {
        j = 0;
        while (j < size) {
            my_put_pixel(fb, x + j, y + i, generate_d());
            j++;
        }
        i++;
    }
}

all_t animation5(all_t all, fb_t *fb)
{
    static int i = 0;
    int x = 0;
    int y = 0;
    int size = 1;
    int speed = 5;

    if (i >= speed) {
        x = rand() % (all.width - 250);
        y = rand() % (all.height - 250);
        size = (rand() % 250) + 50;
        my_put_square_b(x, y, size + 20, fb);
        my_put_square(x + 10, y + 10, size, fb);
        i = 0;
    }
    i++;
    return all;
}
