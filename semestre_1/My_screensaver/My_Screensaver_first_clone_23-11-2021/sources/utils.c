/*
** EPITECH PROJECT, 2021
** UTILS_C
** File description:
** fonctions utilitaires
*/

#include "my_scsv.h"

fb_t *framebuffer_create(unsigned int width, unsigned int height)
{
    fb_t *pointer = malloc(sizeof(fb_t));

    pointer->width = width;
    pointer->height = height;
    pointer->pixels = malloc(width * height * 4);
    return(pointer);
}

void framebuffer_destroy(fb_t *framebuffer)
{
    free(framebuffer);
}

int my_put_pixel(fb_t *buffer, unsigned int x, \
                 unsigned int y, sfColor color)
{
    buffer->pixels[4*(y*buffer->width+x)] = color.r;
    buffer->pixels[4*(y*buffer->width+x)+1] = color.g;
    buffer->pixels[4*(y*buffer->width+x)+2] = color.b;
    buffer->pixels[4*(y*buffer->width+x)+3] = color.a;
    return (0);
}


int my_put_line(fb_t *buffer, unsigned int width, \
                unsigned int y, sfColor color)
{
    unsigned int i = 0;

    while (i <= width) {
        my_put_pixel(buffer,i, y, color);
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
