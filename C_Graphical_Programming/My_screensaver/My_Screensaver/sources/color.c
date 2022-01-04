/*
** EPITECH PROJECT, 2021
** COLOR_C
** File description:
** functions to have colors
*/

#include "my_scsv.h"

sfColor nuance_color(sfColor color, all_t *all)
{
    if (color.r == 255) {
        all->more3 = 0;
    }
    if (color.r == 0) {
        all->more3 = 1;
    }
    if (all->more3)
        color.r++;
    else
        color.r--;
    return color;
}

sfColor generate_color(void)
{
    int r = rand() % 255;
    int g = rand() % 50;
    int b = rand() % 200;

    if (b < 100)
        b = b + 75;
    if (r < 150)
        r = r + 50;
    sfColor color = {r, g, b, 255};
    return color;
}

sfColor generate_color2(void)
{
    int r = rand() % 255;
    int g = rand() % 255;
    int b = rand() % 255;

    sfColor color = {r, g, b, 255};
    return color;
}

sfColor color_pack(int r, int g, int b)
{
    sfColor color;

    color.r = r / 1;
    color.b = b / 1;
    color.g = g / 1;
    color.a = 30;
    return color;
}

sfColor generate_nuance(void)
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
    return (color_pack(r, g, b));
}
