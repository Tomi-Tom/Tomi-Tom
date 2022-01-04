/*
** EPITECH PROJECT, 2021
** ANIM5_C
** File description:
** animation 5
*/

#include "my_scsv.h"

sfColor color_pack2(int r, int g, int b)
{
    sfColor color;

    color.r = r / 1;
    color.b = b / 1;
    color.g = g / 1;
    color.a = 255;
    return color;
}

sfColor generate_nuance2(void)
{
    static int r = 255 * 1;
    static int g = 0;
    static int b = 0;
    int speed_nu = 1;

    if (r == 255 * speed_nu && g < 255 * speed_nu)
        g++;
    if (r > 0 && g == 255 * speed_nu)
        r--;
    if (g == 255 * speed_nu && b < 255 * speed_nu)
        b++;
    if (b == 255 * speed_nu && g > 0)
        g--;
    if (b == 255 * speed_nu && r < 255 * speed_nu)
        r++;
    if (r == 255 * speed_nu && b > 0)
        b--;
    return (color_pack2(r, g, b));
}

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
