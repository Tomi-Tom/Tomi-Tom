/*
** EPITECH PROJECT, 2021
** DRAW_C
** File description:
** functions to draw
*/

#include "my_scsv.h"

int my_put_pixel(fb_t *buffer, unsigned int x, \
    unsigned int y, sfColor color)
{
    buffer->pixels[4 * (y * buffer->width + x)] = color.r;
    buffer->pixels[4 * (y * buffer->width + x)+1] = color.g;
    buffer->pixels[4 * (y * buffer->width + x)+2] = color.b;
    buffer->pixels[4 * (y * buffer->width + x)+3] = color.a;
    return (0);
}

int my_put_line(fb_t *buffer, unsigned int width, \
    unsigned int y, sfColor color)
{
    unsigned int i = 0;

    while (i <= width) {
        my_put_pixel(buffer, i, y, color);
        i++;
    }
    return 0;
}

int my_put_colum(fb_t *buffer, unsigned int x, \
    unsigned int height, sfColor color)
{
    unsigned int i = 0;

    while (i <= height) {
        my_put_pixel(buffer, x, i, color);
        i++;
    }
    return 0;
}

void my_put_square(int x, int y, int size, fb_t *fb)
{
    int i = 0;
    int j = 0;
    sfColor color = generate_nuance();

    while (i < size) {
        j = 0;
        while (j < size) {
            my_put_pixel(fb, x + j, y + i, color);
            j++;
        }
        i++;
    }
}
