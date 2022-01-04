/*
** EPITECH PROJECT, 2021
** clean_fb_c
** File description:
** clean_fb
*/

#include "my_scsv.h"

void clean_fb(fb_t *fb, all_t all)
{
    int i = 0;
    int j = 0;
    sfColor color = set_color_black();

    while (i < all.height) {
        while (j < all.width) {
            my_put_pixel(fb, j, i, color);
            j++;
        }
        j = 0;
        i++;
    }
}

void clean_fb2(fb_t *fb, all_t all)
{
    int i = 0;
    int j = 0;
    sfColor color = set_color_black2();

    while (i < all.height) {
        while (j < all.width) {
            my_put_pixel(fb, j, i, color);
            j++;
        }
        j = 0;
        i++;
    }
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