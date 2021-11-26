/*
** EPITECH PROJECT, 2021
** FRAMEBUFFER_H
** File description:
** FRAMBUFFER_H
*/

#ifndef FRAMEBUFFER_H_
    #define FRAMEBUFFER_H_

    #include <SFML/Graphics.h>

typedef struct framebuffer {
    unsigned int width;
    unsigned int height;
    sfUint8 *pixels;
} fb_t;

fb_t *framebuffer_create(unsigned int width, unsigned int height);
void framebuffer_destroy(fb_t *framebuffer);
int my_put_pixel(fb_t *framebuffer, unsigned int x, \
    unsigned int y, sfColor color);
int my_put_line(fb_t *buffer, unsigned int width, \
    unsigned int y, sfColor color);
int my_put_colum(fb_t *buffer, unsigned int x, \
    unsigned int height, sfColor color);
int my_put_line_rev(fb_t *buffer, unsigned int width, \
    unsigned int y, sfColor color);
int my_put_colum_rev(fb_t *buffer, unsigned int x, \
    unsigned int height, sfColor color);

#endif
