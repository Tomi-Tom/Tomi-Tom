/*
** EPITECH PROJECT, 2021
** UTILS_C
** File description:
** utils functions
*/

#include "my_scsv.h"

sfColor generate_color_red(void)
{
    int r = rand() % 255;
    int g = rand() % 1;
    int b = rand() % 1;

    sfColor color = {r, g, b, 255};
    return color;
}

sfColor generate_color_green(void)
{
    int r = rand() % 1;
    int g = rand() % 255;
    int b = rand() % 1;

    sfColor color = {r, g, b, 255};
    return color;
}

sfColor generate_color_blue(void)
{
    int r = rand() % 1;
    int g = rand() % 1;
    int b = rand() % 255;

    sfColor color = {r, g, b, 255};
    return color;
}

int clean_colum(fb_t *buffer, unsigned int x, unsigned int height)
{
    unsigned int i = 0;
    sfColor color = set_color_black3();

    while (i <= height) {
        my_put_pixel(buffer, x, i, color);
        i++;
    }
    return 0;
}

int clean_line(fb_t *buffer, unsigned int width, unsigned int y)
{
    unsigned int i = 0;
    sfColor color = set_color_black3();

    while (i <= width) {
        my_put_pixel(buffer, i, y, color);
        i++;
    }
    return 0;
}
